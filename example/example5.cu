#include <stdio.h>
#include <math.h>
#include "LearnCUDA/include/error.cuh"

#define BLOCK_SIZE 32
// a[][] * b[][] = c[][]
//

//                         b00 b01 b02 b03
//                         b10 b11 b12 b13
//                         b20 b21 b22 b23
//                         b30 b31 b32 b33
//
// a00 a01 a02 a03         c00 c01 c02 c03
// a10 a11 a12 a13         c10 c11 c12 c13
// a20 a21 a22 a23         c20 c21 c22 c23
// a30 a31 a32 a33         c30 c31 c32 c33
//
// c21 = a20 * b01 + a21 * b11 + a22 * b21 + a23 * b31
// a00 a01 a02 a03 a10 a11 a12 a13 a20 a21 a22 a23 a30 a31 a32 a33
// 0   1   2   3   4   5   6   7   8   9   10  11  12  13  14  15
// b00 b01 b02 b03 b10 b11 b12 b13 b20 b21 b22 b23 b30 b31 b32 b33
//
// index = y * size + x
// step 0 -> 3
// a_index = y * size + step;
// b_index = step * size + x;

__global__ void gpu_matrix_mult(int *a, int *b, int *c, const int size) {
    int y = blockDim.y * blockIdx.y + threadIdx.y;
    int x = blockDim.x * blockIdx.x + threadIdx.x;
    if(x < size && y < size) {
        int tmp = 0;
        for(int step = 0; step < size; ++step) {
            tmp += a[y*size + step] * b[step * size + x];
        }
        c[y * size + x] = tmp;
    }
}

void cpu_matrix_mult(int *a, int *b, int *c, const int size) {
    for(int y = 0; y < size; ++y) {
        for(int x = 0; x < size; ++x) {
            int tmp = 0;
            for(int step = 0; step < size; ++step) {
                tmp += a[y*size + step] * b[step * size + x];
            }
            c[y * size + x] = tmp;
        }
    }
}

int main() {

    const int matrix_size = 1000;
    const int memsize = sizeof(int) * matrix_size * matrix_size;

    int *h_a, *h_b, *h_c, *h_cc;
    cudaMallocHost((void**)&h_a, memsize);
    cudaMallocHost((void**)&h_b, memsize);
    cudaMallocHost((void**)&h_c, memsize);
    cudaMallocHost((void**)&h_cc, memsize);

    for(int y = 0; y < matrix_size; ++y) {
        for(int x = 0; x < matrix_size; ++x) {
            h_a[y * matrix_size + x] = rand() % 1024;
            h_b[y * matrix_size + x] = rand() % 1024;
        }
    }

    int *d_a, *d_b, *d_c;
    cudaMalloc((void**) &d_a, memsize);
    cudaMalloc((void**) &d_b, memsize);
    cudaMalloc((void**) &d_c, memsize);
    cudaError_t error_code;

    cudaEvent_t start, stop_cpu, stop_gpu;
    CHECK(cudaEventCreate(&start));
    cudaEventCreate(&stop_cpu);
    cudaEventCreate(&stop_gpu);

    cudaEventRecord(start);

    CHECK(cudaMemcpy(d_a, h_a, memsize, cudaMemcpyHostToDevice));
    CHECK(cudaMemcpy(d_b, h_b, memsize, cudaMemcpyHostToDevice));

    unsigned int grid_rows = (matrix_size + BLOCK_SIZE - 1) / BLOCK_SIZE;
    unsigned int grid_cols = (matrix_size + BLOCK_SIZE - 1) / BLOCK_SIZE;

    dim3 dimGrid(grid_cols, grid_rows);
    dim3 dimBlock(BLOCK_SIZE, BLOCK_SIZE); // 1.gpu warp 32 2. <= 1024

    gpu_matrix_mult<<<dimGrid, dimBlock>>>(d_a, d_b, d_c, matrix_size);
    error_code = cudaGetLastError();
    if(error_code != cudaSuccess) {
        printf("Errors info: %s\n", cudaGetErrorString(error_code));
        printf("FILE: %s\n", __FILE__);
        printf("LINE: %d\n", __LINE__);
    }

    cudaMemcpy(h_c, d_c, memsize, cudaMemcpyDeviceToHost);
    cudaEventRecord(stop_gpu);
    cudaEventSynchronize(stop_gpu);

    cpu_matrix_mult(h_a, h_b, h_cc, matrix_size);

    cudaEventRecord(stop_cpu);
    cudaEventSynchronize(stop_cpu);

    float time_cpu, time_gpu;
    cudaEventElapsedTime(&time_gpu, start, stop_gpu);
    cudaEventElapsedTime(&time_cpu, stop_gpu, stop_cpu);

    printf("GPU time: %.2f ms\n", time_gpu);
    printf("CPU time: %.2f ms\n", time_cpu);

    cudaEventDestroy(start);
    cudaEventDestroy(stop_gpu);
    cudaEventDestroy(stop_cpu);

    bool error = false;
    for(int y = 0; y < matrix_size; ++y) {
        for(int x = 0; x < matrix_size; ++x) {
            if(fabs(h_cc[y * matrix_size + x] - h_c[y * matrix_size + x]) > (1.0e-10)) {
                error = true;
            }
        }
    }
    printf("Result: %s\n", error ? "Errors" : "Pass");

    cudaFreeHost(h_a);
    cudaFreeHost(h_b);
    cudaFreeHost(h_c);
    cudaFreeHost(h_cc);
    cudaFree(d_a);
    cudaFree(d_b);
    cudaFree(d_c);

    return 0;
}
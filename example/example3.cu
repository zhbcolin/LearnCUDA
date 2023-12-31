//#include <stdio.h>
//#include <math.h>
//
//#define BLOCK_SIZE 16
//// a[][] * b[][] = c[][]
////
//
////                         b00 b01 b02 b03
////                         b10 b11 b12 b13
////                         b20 b21 b22 b23
////                         b30 b31 b32 b33
////
//// a00 a01 a02 a03         c00 c01 c02 c03
//// a10 a11 a12 a13         c10 c11 c12 c13
//// a20 a21 a22 a23         c20 c21 c22 c23
//// a30 a31 a32 a33         c30 c31 c32 c33
////
//// c21 = a20 * b01 + a21 * b11 + a22 * b21 + a23 * b31
//// a00 a01 a02 a03 a10 a11 a12 a13 a20 a21 a22 a23 a30 a31 a32 a33
//// 0   1   2   3   4   5   6   7   8   9   10  11  12  13  14  15
//// b00 b01 b02 b03 b10 b11 b12 b13 b20 b21 b22 b23 b30 b31 b32 b33
////
//// index = y * size + x
//// step 0 -> 3
//// a_index = y * size + step;
//// b_index = step * size + x;
//
//__global__ void gpu_matrix_mult(int *a, int *b, int *c, const int size) {
//    int y = blockDim.y * blockIdx.y + threadIdx.y;
//    int x = blockDim.x * blockIdx.x + threadIdx.x;
//    if(x < size && y < size) {
//        int tmp = 0;
//        for(int step = 0; step < size; ++step) {
//            tmp += a[y*size + step] * b[step * size + x];
//        }
//        c[y * size + x] = tmp;
//    }
//}
//
//void cpu_matrix_mult(int *a, int *b, int *c, const int size) {
//    for(int y = 0; y < size; ++y) {
//        for(int x = 0; x < size; ++x) {
//            int tmp = 0;
//            for(int step = 0; step < size; ++step) {
//                tmp += a[y*size + step] * b[step * size + x];
//            }
//            c[y * size + x] = tmp;
//        }
//    }
//}
//
//int main() {
//
//    const int matrix_size = 1000;
//    const int memsize = sizeof(int) * matrix_size * matrix_size;
//
//    int *h_a, *h_b, *h_c, *h_cc;
//    cudaMallocHost((void**)&h_a, memsize);
//    cudaMallocHost((void**)&h_b, memsize);
//    cudaMallocHost((void**)&h_c, memsize);
//    cudaMallocHost((void**)&h_cc, memsize);
//
//    for(int y = 0; y < matrix_size; ++y) {
//        for(int x = 0; x < matrix_size; ++x) {
//            h_a[y * matrix_size + x] = rand() % 1024;
//            h_b[y * matrix_size + x] = rand() % 1024;
//        }
//    }
//
//    int *d_a, *d_b, *d_c;
//    cudaMalloc((void**) &d_a, memsize);
//    cudaMalloc((void**) &d_b, memsize);
//    cudaMalloc((void**) &d_c, memsize);
//
//    cudaMemcpy(d_a, h_a, memsize, cudaMemcpyHostToDevice);
//    cudaMemcpy(d_b, h_b, memsize, cudaMemcpyHostToDevice);
//
//    unsigned int grid_rows = (matrix_size + BLOCK_SIZE - 1) / BLOCK_SIZE;
//    unsigned int grid_cols = (matrix_size + BLOCK_SIZE - 1) / BLOCK_SIZE;
//
//    dim3 dimGrid(grid_cols, grid_rows);
//    dim3 dimBlock(BLOCK_SIZE, BLOCK_SIZE); // 1.gpu warp 32 2. <= 1024
//
//    gpu_matrix_mult<<<dimGrid, dimBlock>>>(d_a, d_b, d_c, matrix_size);
//
//    cudaMemcpy(h_c, d_c, memsize, cudaMemcpyDeviceToHost);
//
//    cpu_matrix_mult(h_a, h_b, h_cc, matrix_size);
//
//    bool error = false;
//    for(int y = 0; y < matrix_size; ++y) {
//        for(int x = 0; x < matrix_size; ++x) {
//            if(fabs(h_cc[y * matrix_size + x] - h_c[y * matrix_size + x]) > (1.0e-10)) {
//                error = true;
//            }
//        }
//    }
//    printf("Result: %s\n", error ? "Errors" : "Pass");
//
//    cudaFreeHost(h_a);
//    cudaFreeHost(h_b);
//    cudaFreeHost(h_c);
//    cudaFreeHost(h_cc);
//    cudaFree(d_a);
//    cudaFree(d_b);
//    cudaFree(d_c);
//
//    return 0;
//}

#include <stdio.h>
#include <math.h>

// a[][] * b[][] = c[][]
//
//                         b00 b01 b02 b03
//                         b10 b11 b12 b13
//                         b20 b21 b22 b23
//                         b30 b31 b32 b33
//
// a00 a01 a02 a03         c00 c01 c02 c03
// a10 a11 a12 a13         c10 c11 c12 c13     block(1, 0) -> shared memory
// a20 a21 a22 a23         c20 c21 c22 c23     c20 c21
// a30 a31 a32 a33         c30 c31 c32 c33     c30 c31
//
//                              b00 b01->  sub_b_step_0
//                              b10 b11
//
//                              b20 b21->  sub_b_step_1
//                              b30 b31
// sub_a_step_0 sub_a_step_1    sub_c
// a20 a21      a22 a23         c20 c21
// a30 a31      a32 a33         c30 c31
//
// sub_c = sub_a_step_0 * sub_b_step_0 + sub_a_step_1 * sub_b_step_1;
//
// for(int step =0; step < N/block_size; step++ )
//      load sub_a_step to shared memory;
//      load sub_b_step to shared memory;
//      tmp += sub_a_step_on_sharedmemory * sub_b_step_on_sharedmemory;
// sub_c = tmp;
//
// cudaMalloc -> global memory
// data global memory -> shared memory
// threads shared memory -> register
// shared memory SM(stream multi-processor) same block same shared memory
//
// c21 = a20 * b01 + a21 * b11 + a22 * b21 + a23 * b31
// a00 a01 a02 a03 a10 a11 a12 a13 a20 a21 a22 a23 a30 a31 a32 a33
// 0   1   2   3   4   5   6   7   8   9   10  11  12  13  14  15
// b00 b01 b02 b03 b10 b11 b12 b13 b20 b21 b22 b23 b30 b31 b32 b33

#define M 1000
#define N 500
#define K 1000

__managed__ int a[M*N];
__managed__ int b[N*K];
__managed__ int c_gpu[M*K];
__managed__ int c_cpu[M*K];

#define BLOCK_SIZE 16

__global__ void gpu_matrix(int* a, int* b, int* c, int m, int n, int k)
{
    __shared__ int sub_a[BLOCK_SIZE][BLOCK_SIZE];
    __shared__ int sub_b[BLOCK_SIZE][BLOCK_SIZE];

    int x = blockIdx.x * blockDim.x + threadIdx.x;
    int y = blockIdx.y * blockDim.y + threadIdx.y;

    int tmp =0;
    int idx;
    for(int step=0; step <= n/BLOCK_SIZE; step++)
    {
        int step_x = step * BLOCK_SIZE + threadIdx.x;
        int step_y = y;
        idx = step_y * n + step_x;
        if(step_x >= n || step_y >= m)
        {
            sub_a[threadIdx.y][threadIdx.x] =0;
        }
        else
        {
            sub_a[threadIdx.y][threadIdx.x] = a[idx];
        }

        step_x = x;
        step_y = step * BLOCK_SIZE + threadIdx.y;
        idx = step_y * k +step_x;
        if(step_x >= k || step_y >= n)
        {
            sub_b[threadIdx.y][threadIdx.x] = 0;
        }
        else
        {
            sub_b[threadIdx.y][threadIdx.x] = b[idx];
        }

        __syncthreads();

        for(int i = 0; i < BLOCK_SIZE; i++)
        {
            tmp +=sub_a[threadIdx.y][i] * sub_b[i][threadIdx.x];
        }
        __syncthreads();
    }

    if ( x < k && y < m)
    {
        c[y*k + x] = tmp;
    }
}

void cpu_matrix(int* a, int* b, int* c, int m, int n, int k)
{
    for( int y = 0; y < m; y++)
    {
        for(int x = 0; x < k; x++)
        {
            int tmp = 0;
            for(int step =0; step < n; step++)
            {
                tmp += a[y*n + step] * b[step*k + x];
            }
            c[y * k + x] = tmp;
        }
    }
}

int main()
{
    for(int y=0; y<M; ++y)
    {
        for(int x=0; x<N; ++x)
        {
            a[y * N + x] = rand()%1024;
        }
    }

    for(int y=0; y<N; ++y)
    {
        for(int x=0; x<K; ++x)
        {
            b[y*K + x] = rand()%1024;
        }
    }

    unsigned int grid_x = (K + BLOCK_SIZE -1)/BLOCK_SIZE;
    unsigned int grid_y = (M + BLOCK_SIZE -1)/BLOCK_SIZE;

    dim3 dimGrid(grid_x, grid_y);
    dim3 dimBlock(BLOCK_SIZE, BLOCK_SIZE);

    gpu_matrix<<<dimGrid, dimBlock>>>(a, b, c_gpu, M, N, K);

    cpu_matrix(a, b, c_cpu, M, N, K);

    bool errors = false;

    for(int y=0; y<M; y++)
    {
        for(int x=0; x<K; x++)
        {
            if(fabs(c_cpu[y*K + x] - c_gpu[y*K+x]) > (1.0e-10))
            {
                errors = true;
                printf("c_cpu: %d. c_gpu: %d", c_cpu[y*K + x], c_gpu[y*K+x]);
            }
        }
    }

    printf("Result: %s\n", errors?"Error":"Pass");

    return 0;
}
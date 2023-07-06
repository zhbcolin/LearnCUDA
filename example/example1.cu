#include <stdio.h>

__global__ void my_first_kernel() {

    int tidx = threadIdx.x;
    int tidy = threadIdx.y;
    int bidx = blockIdx.x;
    int bidy = blockIdx.y;

    printf("Hello World from thread(thread index: (%d, %d), block index: (%d, %d))!\n", tidy, tidx, bidy, bidx);
}

// thread --> block --> grid
// SM stream multi-processor
int main() {

    printf("Hello World from CPU!\n");

    //int block_size = 3;
    dim3 block_size(3, 3);
    // t00, t01. t02
    // t10, t11, t12
    // t20, t21, t22
    dim3 grid_size(2, 2);
    //int grid_size = 2;
    // b00, b01
    // b10, b11

    my_first_kernel<<<grid_size,block_size>>>();
    cudaDeviceSynchronize();

    return 0;
}
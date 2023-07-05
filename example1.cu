#include <stdio.h>

__global__ void my_first_kernel() {

    int tid = threadIdx.x;
    int bid = blockIdx.x;

    printf("Hello World from GPU!\n");
}

// thread --> block --> grid
// SM stream multi-processor
int main() {

    printf("Hello World from CPU!\n");

    int block_size = 3;
    int grid_size = 2;

    my_first_kernel<<<grid_size,block_size>>>();
    cudaDeviceSynchronize();

    return 0;
}
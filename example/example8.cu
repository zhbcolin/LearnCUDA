//#include <stdio.h>
//#include <math.h>
//
//#define N 100000000
//#define BLOCK_SIZE 256
//#define GRID_SIZE 32
//
//__managed__ int source[N];
//__managed__ int gpu_result[1] = {0};
//
//// source[N]: 1 + 2 + 3 + 4 + ... + N
//// cpu: for loop
//// gpu = 1 + 2 + 3 + 4 + ... + N    0 + 1 + 2 + 3 + 4 + 5 + 6 + 7 8 9 10 11 12 ... 31
//// thread id step 0: tid0: source[0] + source[4] -> source[0]
////                   tid1: source[1] + source[5] -> source[1]
////                   tid2: source[2] + source[6] -> source[2]
////                   tid4: source[4] + source[7] -> source[3]
////           step 1: tid0: source[0] + source[2] -> source[0]
////                   tid1: source[1] + source[3] -> source[1]
////
////           step 2: tid0: source[0] + source[1] -> source[0]
//// thread id: blockDim.x * blockIdx.x + threadIdx.x + step * blockDim.x * GridDim.x
//// thread 0: source[0, 8, 16, 24] sum -> shared memory
//
//__global__ void sum_gpu(int *in, int count, int *out) {
//    __shared__ int ken[BLOCK_SIZE];
//    // grid loop
//    int shared_tmp = 0;
//    for(int idx = blockDim.x * blockIdx.x + threadIdx.x; idx < count; idx += blockDim.x * gridDim.x) {
//        shared_tmp += in[idx];
//    }
//    ken[threadIdx.x] = shared_tmp;
//    __syncthreads();
//
//    int tmp = 0;
//    for(int total_threads = BLOCK_SIZE/2; total_threads >= 1; total_threads /= 2) {
//        if(threadIdx.x < total_threads) {
//            tmp = ken[threadIdx.x] + ken[threadIdx.x + total_threads];
//        }
//        __syncthreads();
//        if(threadIdx.x < total_threads) {
//            ken[threadIdx.x] = tmp;
//        }
//    }
//    // block_sum -> share memory[0]
//    if(blockIdx.x * blockDim.x < count) {
//        if(threadIdx.x == 0) {
//            atomicAdd(out, ken[0]);
//            // memory space wmr
//        }
//    }
//}
//
//int main() {
//    int cpu_result = 0;
//
//    printf("Init input source[N]\n");
//    for(int i = 0; i < N; ++i) {
//        source[i] = rand() % 10;
//    }
//
//    cudaEvent_t start, stop_cpu, stop_gpu;
//    cudaEventCreate(&start);
//    cudaEventCreate(&stop_cpu);
//    cudaEventCreate(&stop_gpu);
//
//    cudaEventRecord(start);
//    cudaEventSynchronize(start);
//
//    for(int i = 0; i < 20; ++i) {
//        gpu_result[0] = 0;
//        sum_gpu<<<GRID_SIZE, BLOCK_SIZE>>>(source, N, gpu_result);
//        cudaDeviceSynchronize();
//    }
//    cudaEventRecord(stop_gpu);
//    cudaEventSynchronize(stop_gpu);
//
//    for(int i = 0; i < N; ++i) {
//        cpu_result += source[i];
//    }
//
//    cudaEventRecord(stop_cpu);
//    cudaEventSynchronize(stop_cpu);
//
//    float time_cpu, time_gpu;
//    cudaEventElapsedTime(&time_cpu, stop_gpu, stop_cpu);
//    cudaEventElapsedTime(&time_gpu, start, stop_gpu);
//
//    printf("CPU time: %.2f\nGPU time: %.2f\n", time_cpu, time_gpu/20.0);
//    printf("Result: %s\nGPU_result: %d;\nCPU_result: %d;\n", (gpu_result[0] == cpu_result) ? "Pass" : "Error", gpu_result[0], cpu_result);
//
//    return 0;
//}
#include <stdio.h>
#include <math.h>

#define N 100000000
#define BLOCK_SIZE 256
#define GRID_SIZE 32

__managed__ int source[N];
__managed__ int gpu_result[1] = {0};

// source[N]:  1 + 2 + 3 + 4 + ...............N
// cpu: for loop
// gpu: 1 + 2 + 3 + 4 + ...............N    0 + 1 + 2 + 3 + 4 + 5 + 6 + 7 8 9 10 11 12  .... 31
// thread id step 0:  tid0:source[0] + source[4] -> source[0]
//                    tid1:source[1] + source[5] -> source[1]
//                    tid2:source[2] + source[6] -> source[2]
//                    tid4:source[4] + source[7] -> source[3]
//           step 1:  tid0: source[0] + source[2] -> source[0]
//                    tid1: source[1] + source[3] -> source[1]
//
//           step 2:  tid0: source[0] + source[1] -> source[0]
// thread id: blockDim.x * blockIdx.x + threadIdx.x + step * blockDim.x * GridDim.x
// thread 0: source[0, 8, 16, 24] sum -> shared memory
//
//

__global__ void sum_gpu(int *in, int count, int *out)
{
    __shared__ int ken[BLOCK_SIZE];
    //grid_loop
    int shared_tmp=0;
    for(int idx = blockDim.x * blockIdx.x + threadIdx.x; idx < count; idx += blockDim.x * gridDim.x)
    {
        shared_tmp +=in[idx];
    }
    ken[threadIdx.x] = shared_tmp;
    __syncthreads();

    int tmp =0;
    for(int total_threads = BLOCK_SIZE/2; total_threads>=1; total_threads/=2)
    {
        if(threadIdx.x < total_threads)
        {
            tmp = ken[threadIdx.x] + ken[threadIdx.x + total_threads];
        }
        __syncthreads();
        if(threadIdx.x < total_threads)
        {
            ken[threadIdx.x] = tmp;
        }
    }
    // block_sum -> share memory[0]
    if(blockIdx.x * blockDim.x < count)
    {
        if(threadIdx.x == 0)
        {
            atomicAdd(out, ken[0]);
            // memory space wmr
        }
    }


}



int main()
{
    int cpu_result =0;


    printf("Init input source[N]\n");
    for(int i =0; i<N; i++)
    {
        source[i] = rand()%10;
    }

    cudaEvent_t start, stop_cpu, stop_gpu;
    cudaEventCreate(&start);
    cudaEventCreate(&stop_cpu);
    cudaEventCreate(&stop_gpu);

    cudaEventRecord(start);
    cudaEventSynchronize(start);

    for(int i = 0; i<20; i++)
    {
        gpu_result[0] = 0;
        sum_gpu<<<GRID_SIZE, BLOCK_SIZE>>>(source, N, gpu_result);
        cudaDeviceSynchronize();
    }
    cudaEventRecord(stop_gpu);
    cudaEventSynchronize(stop_gpu);

    for(int i =0; i<N; i++)
    {
        cpu_result +=source[i];
    }

    cudaEventRecord(stop_cpu);
    cudaEventSynchronize(stop_cpu);

    float time_cpu, time_gpu;
    cudaEventElapsedTime(&time_cpu, stop_gpu, stop_cpu);
    cudaEventElapsedTime(&time_gpu, start, stop_gpu);

    printf("CPU time: %.2f\nGPU time: %.2f\n", time_cpu, time_gpu/20);
    printf("Result: %s\nGPU_result: %d;\nCPU_result: %d;\n", (gpu_result[0] == cpu_result)?"Pass":"Error", gpu_result[0], cpu_result);

    return 0;
}`
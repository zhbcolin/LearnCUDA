cmake_minimum_required(VERSION 3.25)
project(learnCUDA CUDA)

include_directories(.)
set(CMAKE_CUDA_STANDARD 17)
set(CMAKE_CUDA_ARCHITECTURES 70)
set(OpenCV_DIR D:\\OpenCV\\build\\x64\\vc16\\lib)
find_package(OpenCV REQUIRED)
include_directories(D:\\OpenCV\\build\\x64)

add_executable(example1 example/example1.cu)
add_executable(example2 example/example2.cu)
add_executable(example3 example/example3.cu)
add_executable(example4 example/example4.cu)
add_executable(example5 example/example5.cu)
add_executable(example6 example/example6.cu)
add_executable(example7 example/example7.cu)
add_executable(example8 example/example8.cu)
add_executable(example9 example/example9.cu)

set_target_properties(example1 PROPERTIES
        CUDA_SEPARABLE_COMPILATION ON)
set_target_properties(example2 PROPERTIES
        CUDA_SEPARABLE_COMPILATION ON)
set_target_properties(example3 PROPERTIES
        CUDA_SEPARABLE_COMPILATION ON)

set_target_properties(example4 PROPERTIES
        CUDA_SEPARABLE_COMPILATION ON)
target_link_libraries(example4 ${OpenCV_LIBS})
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

set_target_properties(example5 PROPERTIES
        CUDA_SEPARABLE_COMPILATION ON)
set_target_properties(example6 PROPERTIES
        CUDA_SEPARABLE_COMPILATION ON)
set_target_properties(example7 PROPERTIES
        CUDA_SEPARABLE_COMPILATION ON)
set_target_properties(example8 PROPERTIES
        CUDA_SEPARABLE_COMPILATION ON)
set_target_properties(example9 PROPERTIES
        CUDA_SEPARABLE_COMPILATION ON)

add_executable(1_add_cpu book/1_add_cpu.cu)
add_executable(1_add_gpu book/1_add_gpu.cu)
add_executable(2_global_mem book/2_global_mem.cu)
add_executable(3_shared_mem_cpu book/3_shared_mem_cpu.cu)
add_executable(3_shared_mem_gpu book/3_shared_mem_gpu.cu)
add_executable(3_shared_mem_bank book/3_shared_mem_bank.cu)
add_executable(4_atomic_reduce book/4_atomic_reduce.cu)
add_executable(4_atomic_neighbor_cpu book/4_atomic_neighbor_cpu.cu)
add_executable(4_atomic_neighbor_gpu book/4_atomic_neighbor_gpu.cu)
add_executable(5_warp_reduce book/5_warp_reduce.cu)
add_executable(5_warp_reduce_parallelism book/5_warp_reduce_parallelism.cu)
add_executable(5_warp_reduce_static book/5_warp_reduce_static.cu)
add_executable(5_warp book/5_warp.cu)
add_executable(6_host_kernel book/6_host_kernel.cu)
add_executable(6_kernel_kernel book/6_kernel_kernel.cu)
add_executable(6_kernel_transfer book/6_kernel_transfer.cu)
add_executable(7_unified_memory_add book/7_unified_memory_add.cu)
add_executable(7_unified_memory_oversubscription1 book/7_unified_memory_oversubscription1.cu)
add_executable(7_unified_memory_oversubscription2 book/7_unified_memory_oversubscription2.cu)
add_executable(7_unified_memory_oversubscription3 book/7_unified_memory_oversubscription3.cu)
add_executable(7_unified_memory_prefetch book/7_unified_memory_prefetch.cu)

add_subdirectory(book/8_cpp)
cmake_minimum_required(VERSION 3.25)
project(learnCUDA CUDA)

set(CMAKE_CUDA_STANDARD 17)
set(CMAKE_CUDA_ARCHITECTURES 70)

add_executable(example1 example/example1.cu)
add_executable(example2 example/example2.cu)
add_executable(example3 example/example3.cu)

set_target_properties(example1 PROPERTIES
        CUDA_SEPARABLE_COMPILATION ON)
set_target_properties(example2 PROPERTIES
        CUDA_SEPARABLE_COMPILATION ON)
set_target_properties(example3 PROPERTIES
        CUDA_SEPARABLE_COMPILATION ON)
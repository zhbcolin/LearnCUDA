cmake_minimum_required(VERSION 3.25)
project(learnCUDA CUDA)

set(CMAKE_CUDA_STANDARD 17)
set(CMAKE_CUDA_ARCHITECTURES 70)

add_executable(learnCUDA example1.cu)

set_target_properties(learnCUDA PROPERTIES
        CUDA_SEPARABLE_COMPILATION ON)

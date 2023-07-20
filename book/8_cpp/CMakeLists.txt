cmake_minimum_required(VERSION 3.25)
project(8_cpp CUDA)

include_directories(.)
set(CMAKE_CUDA_STANDARD 17)
set(CMAKE_CUDA_ARCHITECTURES 70)

add_executable(main initialize.cu)
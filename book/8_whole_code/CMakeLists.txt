cmake_minimum_required(VERSION 3.25)
project(8_whole_code CUDA)

include_directories(.)
set(CMAKE_CUDA_STANDARD 17)
set(CMAKE_CUDA_ARCHITECTURES 70)

add_executable(8_whole_code main.cu force.cu initialize.cu integrate.cu memory.cu neighbor.cu reduce.cu)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
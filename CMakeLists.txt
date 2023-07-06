cmake_minimum_required(VERSION 3.25)
project(learnCUDA CUDA)

include_directories(.)
set(CMAKE_CUDA_STANDARD 17)
set(CMAKE_CUDA_ARCHITECTURES 70)
set(OpenCV_DIR D:\\OpenCV\\build\\x64\\vc16\\lib)
find_package(OpenCV REQUIRED)
include_directories(D:\\OpenCV\\build\\x64)

add_executable(example1 LearnCUDA/example/example1.cu)
add_executable(example2 LearnCUDA/example/example2.cu)
add_executable(example3 LearnCUDA/example/example3.cu)
add_executable(example4 LearnCUDA/example/example4.cu)
add_executable(example5 LearnCUDA/example/example5.cu)
add_executable(example6 LearnCUDA/example/example6.cu)
add_executable(example7 LearnCUDA/example/example7.cu)
add_executable(example8 LearnCUDA/example/example8.cu)

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
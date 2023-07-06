#pragma once
#include "../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/stdio.h"

#define CHECK(call)                                                        \
do {                                                                       \
    const cudaError_t error_code = call;                                   \
    if(error_code != cudaSuccess) {                                        \
        printf("CUDA Error: \n");                                          \
        printf("    File:    %s\n", __FILE__);                             \
        printf("    Line:    %d\n", __LINE__);                             \
        printf("    Error code: %d\n", error_code);                        \
        printf("    Error text: %s\n", cudaGetErrorString(error_code));    \
        exit(1);                                                           \
    }                                                                      \
} while(0)
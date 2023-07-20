#include "../../include/error.cuh"
#include "force.h"
#include "mic.h"

struct LJ {
    real cutoff2;
    real e24s6;
    real e48s12;
    real e4s6;
    real e4s12;
};

static void __global__ gpu_find_force(LJ lj, int N, int *g_NN, int *g_NL, Box box,
                                      real *g_x, real *g_y, real *g_z, real *g_fx, real *g_fy, real *g_fz, real *g_pe) {
    int i = blockIdx.x * blockDim.x + threadIdx.x;
    if(i < N) {
        real fx = 0.0;
        real fy = 0.0;
        real fz = 0.0;
        real potential = 0.0;
        int NN = g_NN[i];
        real x_i = g_x[i];
        real y_i = g_y[i];
        real z_i = g_z[i];
        for(int k = 0; k < NN; ++k) {
            int j = g_NL[i + N * k];
            real x_ij = g_x[j] - x_i;
            real y_ij = g_y[j] - y_i;
            real z_ij = g_z[j] - z_i;
            apply_mic(box, &x_ij, &y_ij, &z_ij);
            real r2 = x_ij*x_ij + y_ij*y_ij + z_ij*z_ij;
            if(r2 > lj.cutoff2) { continue; }

            real r2inv = 1.0 / r2;
            real r4inv = r2inv * r2inv;
            real r6inv = r2inv * r4inv;
            real r8inv = r4inv * r4inv;
            real r12inv = r4inv * r8inv;
            real r14inv = r6inv * r8inv;
            real f_ij = lj.e24s6 * r8inv - lj.e48s12 * r14inv;
            potential += lj.e4s12 * r12inv - lj.e4s6 * r6inv;
            fx += f_ij * x_ij;
            fy += f_ij * y_ij;
            fz += f_ij * z_ij;
        }
        g_fx[i] = fx;
        g_fy[i] = fy;
        g_fz[i] = fz;
        g_pe[i] = potential * 0.5;
    }
}
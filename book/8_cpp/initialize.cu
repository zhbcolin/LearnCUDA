#include "initialize.cuh"
#include <stdlib.h>
#include <math.h>

static void scale_velocity(int N, real T_0, Atom *atom) {
    real *m = atom->m;
    real *vx = atom->vx;
    real *vy = atom->vy;
    real *vz = atom->vz;
    real temperature = 0.0;
    for(int n = 0; n < N; ++n) {
        real v2 = vx[n]*vx[n] + vy[n]*vy[n] + vz[n]*vz[n];
        temperature += m[n] * v2;
    }
    temperature /= 3.0 * K_B * N;
    real scale_factor = sqrt(T_0 / temperature);
    for(int n = 0; n < N; ++n) {
        vx[n] *= scale_factor;
        vy[n] *= scale_factor;
        vz[n] *= scale_factor;
    }
}

void initialize_position(int nx, real ax, Atom *atom) {
    atom->box[0] = ax * nx;
    atom->box[1] = ax * nx;
    atom->box[2] = ax * nx;
    atom->box[3] = atom->box[0] * 0.5;
    atom->box[4] = atom->box[1] * 0.5;
    atom->box[5] = atom->box[2] * 0.5;
    real *x = atom->x;
    real *y = atom->y;
    real *z = atom->z;
    real x0[4] = {0.0, 0.0, 0.5, 0.5};
}

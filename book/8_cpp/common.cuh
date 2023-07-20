#pragma once

typedef float real;
const real K_B = 8.617343e-5;
const real TIME_UNIT_CONVERSION = 1.018051e+1;

struct Atom {
    int *NN;
    int *NL;
    real *m;
    real *x;
    real *y;
    real *z;
    real *vx;
    real *vy;
    real *vz;
    real *fx;
    real *fy;
    real *fz;
    real *pe;
    real *ke;
    real *box;
};
#include "common.h"
#include "memory.h"
#include "initialize.h"
#include "neighbor.h"
#include "integrate.h"
#include <stdlib.h>
#include <stdio.h>

int main() {
    int nx = 5;
    int Ne = 2000;
    int Np = 2000;

    int N = 4 * nx * nx * nx;
    int Ns = 100;
    int MN = 200;
    real T_0 = 60.0;
    real ax = 5.385;
    real time_step = 5.0 / TIME_UNIT_CONVERSION;
    Atom atom;
    allocate_memory(N, MN, &atom);
    for (int n = 0; n < N; ++n) { atom.m[n] = 40.0; }
    initialize_position(nx, ax, &atom);
    initialize_velocity(N, T_0, &atom);
    find_neighbor(N, MN, &atom);
    equilibration(Ne, N, MN, T_0, time_step, &atom);
    production(Np, Ns, N, MN, T_0, time_step, &atom);
    deallocate_memory(&atom);
    return 0;
}

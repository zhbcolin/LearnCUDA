#pragma once
#include "common.cuh"

void equilibration(int Ne, int N, int NN, real T_0, real time_step, Atom *atom);
void production(int Np, int Ns, int N, int MN, real T_0, real time_step, Atom *atom);
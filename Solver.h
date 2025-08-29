#ifndef SOLVER_H
#define SOLVER_H

#include <math.h>
#include <assert.h>
#include "Common_Var.h"
#include "Functions_Compare_Numbers.h"
#include "Solver.h"
#include "Square_Header.h"
#include "UI_Input.h"
#include "Unit_Test.h"

Num_of_Sols SquareSolver(double a, double b, double c,
                         double* x1, double* x2);

Num_of_Sols LinearSolver(double a, double b, double *x);

#endif //SOLVER_H

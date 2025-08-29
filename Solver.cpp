#include "Solver.h"

Num_of_Sols SquareSolver(/*Square_Data coeffs)*/       double a, double b, double c,
                                                       double* x1, double* x2)
{
    assert(x1 != 0);
    assert(x2 != 0);
    assert(x2 != x1);

    if (IsEqualZero(a))
    {
        return LinearSolver(b, c, x1);
    }

    double D = b * b - 4 * a * c;

    if (D < 0)
    {
        return ZERO_SOLS;
    }

    if (IsEqualZero(D))
    {
        *x1 = -b / (2 * a);

        return ONE_SOL;
    }

    double sqD = sqrt(D);

    *x1 = (-b + sqD) / (2 * a);

    *x2 = (-b - sqD) / (2 * a);

    return TWO_SOLS;
}

Num_of_Sols LinearSolver(double a, double b, double *x)
{
    assert(x != 0);

    if (IsEqualZero(a) && IsEqualZero(b))
    {
        return INF_SOLS;
    }
    if (IsEqualZero(a))
    {
        return ZERO_SOLS;
    }

    *x = -b / a;

    return ONE_SOL;
}

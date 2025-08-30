#ifndef COMMON_VAR_H
#define COMMON_VAR_H


const double ALMOST_ZERO = 1e-10;

enum  Num_of_Sols { INF_SOLS = -1, ZERO_SOLS, ONE_SOL, TWO_SOLS };

struct Test_Data
{
    double a,b,c;
    int    nRootsref;
    double x1ref, x2ref;
};

#endif //COMMON_VAR_H

#include "Functions_Compare_Numbers.h"


bool IsEqualZero(double x)
{
    return ( fabs(x) < ALMOST_ZERO ) ? 1 : 0 ;
}


bool IsEqNum(double x, double y)
{
    return ( fabs(x-y) < ALMOST_ZERO ) ? 1 : 0 ;
}

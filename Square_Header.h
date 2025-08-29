#ifndef SQUARE_HEADER_H
#define SQUARE_HEADER_H

//! @file........
//! Program solves square equations of the type ax^2 + bx + c = 0

#include <stdio.h>
#include <math.h>
#include <assert.h>
#include "Common_Var.h"
#include "Functions_Compare_Numbers.h"
#include "Solver.h"
#include "Square_Header.h"
#include "UI_Input.h"
#include "Unit_Test.h"
#include "Color_Lib.h"
#include "Start_Settings.h"

/*struct Square_Data
{
    double a,b,c;
    double *x1;
    double *x2;
} */

//--------------------------------------------------------------------------------------------------------

//!@brief This function compares argument with zero by "ALMOST_ZERO" error
//!@param [in] x
//!@return true in case if the x is in arrange of [-ALMOST_ZERO; +ALMOST_ZERO]

bool IsEqualZero(double x);

//!@brief This function compares two numbers by "ALMOST_ZERO" error
//!@param [in] x, the first number
//!@param [in] y, the second number
//!@return true in case if the (x-y) is in arrange of [-ALMOST_ZERO; +ALMOST_ZERO]

bool IsEqNum(double x, double y);

//!@brief Unit Test

void TestSolver();

//!@brief some stuff for Unit Test

int OneTest (Test_Data test, int which_test);

//!@brief This function solves square equations like ax^2 + bx + c = 0
//!@param [in] a
//!@param [in] b
//!@param [in] c
//!@param [out] x1, the first solution
//!@param [out] x2, the second solution
//!@return the number of solutions, in the case of an infinite number of solutions returns -1 (INF_SOLS)

Num_of_Sols SquareSolver(double a, double b, double c,
                         double* x1, double* x2);

//!@brief This function solves linear equations like ax + b = 0
//!@param [in] a
//!@param [in] b
//!@param [out] x, the solution
//!@return the number of solutions, in the case of an infinite number of solutions returns -1 (INF_SOLS)

Num_of_Sols LinearSolver(double a, double b, double *x);

//!@brief This function prints the correct answer to the terminal
//!@param [in] res, the number of solutions
//!@param [in] x1, the first solution
//!@param [in] x2, the second solution

void Answer(/*double a, double b, double c, */Num_of_Sols res, double x1, double x2);

//!@brief This function takes coefficients from user
//!@param [out] a
//!@param [out] b
//!@param [out] c

void InputNums(double* a, double* b, double* c);

//!@brief Buffer
//!@param [in] scanfpar, is needed for scanf
//!@param [in] c, is needed to point out to user what was typed wrong in InputGreetings

void InputBuffer(double* scanfpar, char c);

//!@brief Calls user stupid and asks him to type the input number in the right way
//!@param [in] c, is needed to point out to user what was typed wrong

void InputGreetings(char c);

//!@brief while(getchar()!= '\n');

void ClearBuffer();

#endif //SQUARE_HEADER_H

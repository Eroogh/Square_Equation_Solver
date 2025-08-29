#ifndef UI_INPUT_H
#define UI_INPUT_H


#include <stdio.h>
#include <assert.h>
#include "Common_Var.h"
#include "Functions_Compare_Numbers.h"
#include "Solver.h"
#include "Square_Header.h"
#include "UI_Input.h"
#include "Unit_Test.h"

void ClearBuffer();

void InputGreetings(char c);

void InputBuffer(double* scanfpar, char c);

void InputNums(double* a, double* b, double* c);

#endif //UI_INPUT_H

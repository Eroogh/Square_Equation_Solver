#ifndef UNIT_TEST_H
#define UNIT_TEST_H

#include <stdio.h>
#include <assert.h>
#include "Common_Var.h"
#include "Functions_Compare_Numbers.h"
#include "Solver.h"
#include "Square_Header.h"
#include "UI_Input.h"
#include "Color_Lib.h"
#include "File_Reader.h"

void TestSolver();

int OneTest (Test_Data test, int which_test);

#endif //UNIT_TEST_H

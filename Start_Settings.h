#ifndef START_SETS_H
#define START_SETS_H

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>

#include "Unit_Test.h"


enum Start_Mode { Default_Mode = -1, Normal_Mode, Help_Mode, Tests_Mode, Users_Unit_Test_Mode };

Start_Mode SetStartMode(int argc, char *argv[]);

void PrintProgramMode(Start_Mode Mode);

#endif  //

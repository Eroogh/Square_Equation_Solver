#ifndef START_SETS_H
#define START_SETS_H

#include <stdio.h>
#include <malloc.h>
#include <string.h>

enum Start_Mode { Default = -1, Normal, Help, Tests };

Start_Mode Start_Settings(int argc, char *argv[]);

#endif  //

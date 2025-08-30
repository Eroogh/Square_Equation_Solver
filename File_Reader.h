#ifndef FILE_READER_H
#define FILE_READER_H


#include <stdio.h>
#include <assert.h>
#include <malloc.h>
#include <errno.h>

#include "Common_Var.h"

void File_Reader(const char * File_Name, size_t N, Test_Data *List_of_Tests);

unsigned int Tests_Counter(const char * File_Name);


#endif

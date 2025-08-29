#ifndef COLOR_LIB_H
#define COLOR_LIB_H
#include <stdio.h>

//enum Colors { Black = '0', Red, Green, Yellow, Blue, Magenta, Cyan, White };

#define  ColorPrintBlack(x);    printf("\033[30m" x "\033[0m");
#define  ColorPrintRed(x);      printf("\033[31m" x "\033[0m");
#define  ColorPrintGreen(x);    printf("\033[32m" x "\033[0m");
#define  ColorPrintYellow(x);   printf("\033[33m" x "\033[0m");
#define  ColorPrintBlue(x);     printf("\033[34m" x "\033[0m");
#define  ColorPrintMagenta(x);  printf("\033[35m" x "\033[0m");
#define  ColorPrintCyan(x);     printf("\033[36m" x "\033[0m");
#define  ColorPrintWhite(x);    printf("\033[37m" x "\033[0m");

void ColorResetAll();

#endif //COLOR_LIB_H

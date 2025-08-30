#include "UI_Input.h"

void ClearBuffer()
{
        while(getchar()!= '\n');
}

void InputGreetings(char c)
{
    printf("wrong type dumbass, try again\n\n");
    printf("the coefficient %c is equal to ", c);
}

void InputBuffer(double* scanfpar, char c)
{
    assert(scanfpar != 0);

    char garbage[100] = {0};

    while (scanf("%lg%[ \t]", scanfpar, &garbage) == 0 || getchar() != '\n')
    {
        InputGreetings(c);

        ClearBuffer();
    }
}

void InputNums(double* a, double* b, double* c)
{
    assert(a != 0);
    assert(b != 0);
    assert(c != 0);

    printf("the coefficient a is equal to ");
    InputBuffer(a, 'a');

    printf("the coefficient b is equal to ");
    InputBuffer(b, 'b');

    printf("the coefficient c is equal to ");
    InputBuffer(c, 'c');
}

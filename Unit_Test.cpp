#include "Unit_Test.h"

void TestSolver (const char * File_Name)
{
    FILE * existing_file = fopen(File_Name, "r");

    int Fails_cnt = 0;

    if (existing_file != NULL)
    {
        size_t Amount_of_Tests = Tests_Counter(File_Name);

        Test_Data * List_of_Tests = (Test_Data*) calloc(Amount_of_Tests, sizeof(Test_Data));

        File_Reader(File_Name, Amount_of_Tests, List_of_Tests);

        for (size_t i = 0; i < Amount_of_Tests; i++)
        {
            Fails_cnt += OneTest(List_of_Tests[i], i);
        }

        free(List_of_Tests);

    } else
    {
        printf("Didnt find your file, running basic tests...\n\n");

        Test_Data List_of_Tests [] {{.a = 2, .b = 5,  .c = 2, .nRootsref = TWO_SOLS,  .x1ref = -0.5, .x2ref = -2}, // [0]  D>0
                                    {.a = 1, .b = -6, .c = 5, .nRootsref = TWO_SOLS,  .x1ref = 5,    .x2ref = 1},  // [1]  other D>0
                                    {.a = 0, .b = 0,  .c = 0, .nRootsref = INF_SOLS,  .x1ref = 0,    .x2ref = 0},  // [2]  inf
                                    {.a = 0, .b = 0,  .c = 1, .nRootsref = ZERO_SOLS, .x1ref = 0,    .x2ref = 0},  // [3]  zero linear
                                    {.a = 0, .b = 2,  .c = 1, .nRootsref = ONE_SOL,   .x1ref = -0.5, .x2ref = 0},  // [4]  one linear
                                    {.a = 2, .b = 4,  .c = 3, .nRootsref = ZERO_SOLS, .x1ref = 0,    .x2ref = 0},  // [5]  zero square
                                    {.a = 2, .b = 4,  .c = 2, .nRootsref = ONE_SOL,   .x1ref = -1,   .x2ref = 0}}; // [6]  one square

        size_t Amount_of_Tests = sizeof(List_of_Tests) / sizeof(List_of_Tests[0]); // you can write *Lists_of_Tests instead of List_of_Test[0] !!

        for (size_t i = 0; i < Amount_of_Tests; i++)
        {
            Fails_cnt += OneTest(List_of_Tests[i], i);
        }

    }

    printf("%d Fails\n\n", Fails_cnt);
}

int OneTest(struct Test_Data test, int which_test)
{
    double x1 = 0, x2 = 0;

    int nRoots = SquareSolver(test.a, test.b, test.c, &x1, &x2);

    printf ("Test number %d\n", which_test);

    if (nRoots == test.nRootsref && IsEqNum(x1, test.x1ref) && IsEqNum(x2, test.x2ref))
    {
        printf ("%d %lg %lg\n", nRoots, x1, x2);

        ColorPrintGreen("PASS\n\n");

        return 0;
    }

    printf ("%d %lg %lg, must be %d %lg %lg\n", nRoots, x1, x2, test.nRootsref, test.x1ref, test.x2ref);

    ColorPrintRed("FAIL\n\n");

    return 1;
}

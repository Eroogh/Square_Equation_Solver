#include "Unit_Test.h"

void TestSolver ()
{
    int Fails_cnt = 0;

    unsigned int Amount_of_Tests = Tests_Counter("Test_Data.txt");


    Test_Data * List_of_Tests = (Test_Data*) calloc(Amount_of_Tests, sizeof(Test_Data));

    File_Reader("Test_Data.txt", Amount_of_Tests, List_of_Tests);


    for (size_t i = 0; i < Amount_of_Tests; i++)
    {
        Fails_cnt += OneTest(List_of_Tests[i], i);
    }

    printf("%d Fails\n\n", Fails_cnt);

    free(List_of_Tests); //<--------------------------------- ! BOT!!!!
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

    ColorPrintRed("PASS\n\n");

    return 1;
}

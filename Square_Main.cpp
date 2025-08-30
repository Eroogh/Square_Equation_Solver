#include "Square_Header.h"


//--------------------------------------------------------------------------------------------------------

int main(int argc, char *argv[])
{
    ColorResetAll();

    Start_Mode Mode = SetStartMode(argc, argv);

    PrintProgramMode(Mode);

    switch(Mode)
    {
        case Default_Mode:

        case Help_Mode:

            return 0;

        case Tests_Mode:

            TestSolver("Test_Data.txt");

            return 0;

        case Users_Unit_Test_Mode:

            // check Start_Settings.cpp

            return 0;

        case Normal_Mode:

            break;

        default:

            printf("Unknown Error with setting program working mode\n");
    }



    printf("Poltorashka says hello: Meow!\n\n");

    double a = 0, b = 0, c = 0, x1 = 0, x2 = 0;

    printf("type the coefficients of your ax^2 + bx + c = 0 equation:\n"); // greetings

    InputNums(&a, &b, &c);

    //Square_Data coeffs {.a = 0

    Num_of_Sols res = SquareSolver(a, b, c, &x1, &x2);

    Answer(a, b, c, res, x1, x2);

    printf("COMMIT GUTHUB\n");

    return 0;

}

void Answer(double a, double b, double c, Num_of_Sols res, double x1, double x2)
{
    double Needs_to_Be_a_Zero1 = a * x1 * x1 + b * x1 + c;

    double Needs_to_Be_a_Zero2 = a * x2 * x2 + b * x2 + c;

    if (!(IsEqualZero(Needs_to_Be_a_Zero1) && IsEqualZero(Needs_to_Be_a_Zero1)))
    {
        printf("Error, wrong solutions. You choose really fucked up number, didnt ya?\n\n");
    } else
    {
        switch(res)
        {
        case INF_SOLS:

            printf("It has an infinite number of solutions\n\n");

            break;

        case ZERO_SOLS:

            printf("It has no solutions\n\n");

            break;

        case ONE_SOL:

            printf("the only one solution is %f\n\n", x1);

            break;

        case TWO_SOLS:

            printf("solutions are: %f and %f\n\n", x1, x2);

            break;

        default:

            printf("unknown error. how the fuck did you do this bastard\n\n");

            break;
    }
    }
}

//--------------------------------------------------------------------------------------------------------



#include "Start_Settings.h"

Start_Mode SetStartMode(int argc, char *argv[])
{
    assert(argv != NULL);

    if (argc >= 3)
    {
        assert(argv[2] != NULL);

        if (argc >= 4)
        {
            printf("too many stuff you typed\n\n");

            return Default_Mode;
        }
        if ((!strcmp(argv[1], "-t") || !strcmp(argv[1], "-test")) && argv[2][0] != '-')
        {
            printf("%c\n", argv[2][0]);
            printf("%s\n", argv[2]);

            const char * File_Name = argv[2];

            printf("Trying to run your tests...\n\n");

            TestSolver(argv[2]);

            return Users_Unit_Test_Mode;
        }
    }

    if (argc > 1)
    {

        printf("%c\n", argv[1][0]);

        if (!strcmp(argv[1], "-h") || !strcmp(argv[1], "-help"))
        {
            return Help_Mode;
        }
        if (!strcmp(argv[1], "-t") || !strcmp(argv[1], "-test"))
        {
            return Tests_Mode;
        }
        return Default_Mode;
    }
    return Normal_Mode;
}

void PrintProgramMode(Start_Mode Mode)
{
    switch(Mode)
    {
        case Default_Mode:

            printf("Flags Help:\n"
                   "-h / -help - Flags Help\n"
                   "-t / -test - run Unit Test\n"
                   "-t / -test file_name.txt - run Unit Test from your file (check format of \"Test_Data.txt\")\n"
                   "To solve square equation run without flags\n"
                   "That's All\n\n");
            break;

        case Help_Mode:

            printf("Flags Help:\n"
                   "-t / -test - run Unit Test\n"
                   "-t / -test file_name.txt - run Unit Test from your file (check format of \"Test_Data.txt\")\n"
                   "To solve square equation run without flags\n"
                   "That's All\n\n");
            break;

        case Tests_Mode:

            printf("Running Tests...\n\n");
            break;

        case Users_Unit_Test_Mode:

            printf("Your Tests\n\n");
            break;

        case Normal_Mode:

            printf("Square Equation Solver\n\n");
            break;

        default:

            printf("Unknown Error with setting program working mode");
            break;
    }
}




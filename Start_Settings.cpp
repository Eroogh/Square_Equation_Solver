#include "Start_Settings.h"

Start_Mode Start_Settings(int argc, char *argv[])
{
    printf("%s\n",argv[1]);

    if (argc > 1)
    {
        char * flag = (char*) calloc(argc, sizeof(char));

        flag = argv[1];

        printf("%s\n",argv[1]);

        if (!strcmp(flag,"-h") || !strcmp(flag,"-help"))
        {
            printf("Flags Help:\n-t / -test - run Unit Test\nTo solve square equation run without flags\nThat's All\n\n");
            free(flag);
            return Help;
        }
        if (!strcmp(flag,"-t") || !strcmp(flag,"-test"))
        {
            printf("Running Tests...\n\n");
            free(flag);
            return Tests;
        }

        printf("Flags Help:\n-h / -help - Flags Help\n-t / -test - run Unit Test\nTo solve square equation run without flags\nThat's All\n\n");
        free(flag);
        return Default;
    }
    printf("Square Equation Solver\n\n");
    return Normal;
}

    /*switch(flag)
    {
        case "-h":

            printf("Flags Help:\n-t - run Unit Test\nTo solve square equation run without flags\nThat's All\n\n");
            return Help;
            break;

        case "-t":
            printf("Running Tests\n\n");
            return Tests;
            break;

        default:

            printf("Flags Help:\n-h - Flags Help\n-t - run Unit Test\nTo solve square equation run without flags\nThat's All\n\n");
            return Default;
            break;
    } */

    /*if (argc > 1 && (*++argv)[0] == '-')
    {
        int i = 1;

        while(i < argc)
        {
            printf("%c\n", (*argv)[i]);

            switch((*argv)[i])
            {
                case 'h':

                    printf("Flags Help:\n-t - run Unit Test\nTo solve square equation run without flags\nThat's All\n\n");
                    return Help;
                    break;
                case 't':
                    printf("Running Tests\n\n");
                    return Tests;
                    break;
                default:

                    printf("Flags Help:\n-h - Flags Help\n-t - run Unit Test\nTo solve square equation run without flags\nThat's All\n\n");
                    return Default;
                    break;
            }
        }
    } else
    {
        return Normal;
    } */


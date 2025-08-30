#include "File_Reader.h"

void File_Reader(const char * File_Name, size_t N, Test_Data *List_of_Tests)
{
    FILE * file = fopen(File_Name, "r");

    assert(file != NULL);
    assert(List_of_Tests != NULL);

    for (unsigned i = 0; i < N; ++i)
    {
        assert(i < N);
        fscanf(file, "%lg %lg %lg %d %lg %lg\n", &List_of_Tests[i].a, &List_of_Tests[i].b, &List_of_Tests[i].c,
                                                 &List_of_Tests[i].nRootsref,
                                                 &List_of_Tests[i].x1ref, &List_of_Tests[i].x2ref);
    }

    fclose(file);
}

unsigned int Tests_Counter(const char * File_Name)
{
    assert(File_Name != NULL);

    FILE * file = fopen(File_Name, "r");

    if (errno)
        perror("Tests_Counter");

    printf("%s\n", File_Name);

    assert(file != NULL);

    unsigned int N = 0;

    int c = fgetc(file);

    while (c != EOF)
    {
        if (c == '\n')
        {
            ++N;
        }
        c = fgetc(file);
    }

    fclose(file);

    return N;
}


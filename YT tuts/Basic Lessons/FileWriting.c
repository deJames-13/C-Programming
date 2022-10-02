#include <stdio.h>

int main()
{
    FILE *pFile = fopen("../scratch.txt", "a");
    fprintf(pFile, "\nI appended this sentence with C!");
    fclose(pFile);

    FILE *pReadFile = fopen("../reminder.txt", "r");
    char buffer[255];
    if (pReadFile == NULL)
    {
    }
    else
    {
        while (fgets(buffer, 255, pReadFile) != NULL)
        {
            printf(buffer);
        }
    }

    fclose(pReadFile);
    return 0;
}
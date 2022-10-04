#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Preprocessor statements
#define ROWS 2
#define COLS 2

int main()
{
    int data[ROWS][COLS] = {0};
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("data[%d][%d] = ", i, j);
            int input = 0;
            scanf("%d", &input);
            data[i][j] = input;
        }
    }
    printf("\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("data[%d][%d] = %d\n", i, j, data[i][j]);
        }
    }
    return 0;
}
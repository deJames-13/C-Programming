#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Preprocessor statements
#define ROWS 2
#define COLS 2

void input_array(int data[ROWS][COLS])
{
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
}

void print_array(int data[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("data[%d][%d] = %d\n", i, j, data[i][j]);
        }
    }
}

int main()
{
    int data[ROWS][COLS] = {0};
    input_array(data);
    printf("\n");
    print_array(data);

    return 0;
}
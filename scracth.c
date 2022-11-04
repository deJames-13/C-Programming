#include <stdio.h>

int main()
{
    int ROW = 5;
    int COL = 5;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (i == j || j < i)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int x = 4, y = 4;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
#include <windows.h>

int main()
{
doon:
    system("cls");
    printf("press 1: \n");
    int one;
    scanf("%d", &one);

    if (one == 1)
    {
        printf("UNO\n");
    }
    else
    {
        goto doon;
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int pos;
repeat:
    system("cls");
    printf("Enter a position code: ");
    scanf("%d", &pos);

    switch (pos)
    {
    case 1 ... 3:
        printf("%d", pos);
        break;
    case 4 ... 6:
        printf("%d", pos);
        break;
    case 7 ... 9:
        printf("%d", pos);
        break;

    default:
        break;
    }
    goto repeat;

    return 0;
}
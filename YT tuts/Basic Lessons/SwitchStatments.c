#include <stdio.h>

int main()
{
    // SWITCH Statement - are statements that are like if statements but uses switch - case syntax
    // Case can only accept a character or an integer
    int number = 0;
    printf("type 1: ");
    scanf("%d", &number);
    switch (number)
    {
    case 1:
        printf("Uno\n");
        break;

    default:
        printf("Not uno\n");
        break;
    }

    return 0;
}
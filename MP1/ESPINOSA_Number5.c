#include <stdio.h>

int main()
{
    int x, y, mod, quo;

    printf("Enter X: ");
    scanf("%d", &x);
    printf("Enter Y: ");
    scanf("%d", &y);

    quo = x / y;
    mod = x % y;

    printf("The quotient is: %d\n", quo);
    printf("The remainder is: %d", mod);

    return 0;
}
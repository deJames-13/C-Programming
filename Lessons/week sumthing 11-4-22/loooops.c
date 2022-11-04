#include <stdio.h>

int main()
{
    int num = 0;

    while (num < 1 || num > 100)
    {
        /* code */
        printf("Enter a number: ");
        scanf("%d", &num);
    }
    printf("The valid inputted number is %d\n", num);

    return 0;
}
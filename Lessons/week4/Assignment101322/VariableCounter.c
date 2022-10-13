#include <stdio.h>

/*
Derick James M Espinosa
BSIT-S-T-1A-T

What is variable counter?

It is a variable that keeps track on how many times a variable is executed.
Its incremental or decremental value is fixed.

*/

void main()
{

    // Example 1
    // A code that takes an integer input and displays a counter that counts from 0 to that number.
    printf("\nExample 1:\n");
    printf("A code that takes an integer input and displays a counter that counts from 0 to that number.\n\n");
    int num;
    int counter = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

startExample1:
    if (counter <= num)
    {
        printf("Counter: %d\n", counter);
        counter++;
        goto startExample1;
    }

    // Example 2
    // A code that takes an integer input and displays a counter starts from the number to 0.
    printf("\nExample 2:\n");
    printf("A code that takes an integer input and displays a counter starts from the number to 0.\n\n");
    int num2;

    printf("Enter a number: ");
    scanf("%d", &num2);

startExample2:
    if (num2 >= 0)
    {
        printf("Counter: %d\n", num2);
        num2--;
        goto startExample2;
    }

    // Example 3
    // A code that takes an integer input and prints Hello, World by that times.
    printf("\nExample 3:\n");
    printf("A code that takes an integer input and prints Hello, World by that times. \n\n");
    int num3;
    int counter3 = 0;
    printf("Enter a number: ");
    scanf("%d", &num3);

startExample3:
    if (counter3 < num3)
    {
        printf("Hello, World\n");
        counter3++;
        goto startExample3;
    }
}
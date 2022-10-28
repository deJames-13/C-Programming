#include <stdio.h>
/*
Derick James M Espinosa
BSIT-S-T-1A-T

What is an accumulator?

A variable for counting similar to a counter but the incremental value is changeable. It can be used for calculating sum or totals.

*/
void main()
{

    // Example 1
    // A code that takes  an integer value and displays that sum of its series.
    printf("Example 1:\n");
    printf("A code that takes  an integer value and displays that sum of its series.\n");
    int num;
    int counter = 1;
    int accumulator = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
startExample:
    if (counter <= num)
    {
        accumulator += counter;
        counter++;
        printf("The current sum is: %d\n", accumulator);
        goto startExample;
    }
    printf("The total accumulated sum is %d\n", accumulator);

    // Example 2
    // A code that takes a multiple integer input and accumulate it to a total sum until the user inputs 0.
    printf("\nExample 2\n");
    printf("A code that takes multiple integer input and accumulates them to a total sum until the user inputs 0.\n");
    int num2 = 0;
    int accumulator2 = 0;
startExample2:
    printf("\nInput a number to add (Enter 0 to stop): ");
    scanf("%d", &num2);
    if (num2 != 0)
    {
        accumulator2 += num2;
        printf("The current total is: %d\n", accumulator2);
        goto startExample2;
    }
    printf("The total accumulated sum is %d\n", accumulator2);

    // Example 3
    // A code that takes an integer input and displays a factorial value of the number.
    printf("\nExample3\n");
    printf("A code that takes an integer input and displays a factorial value of that number.\n");
    int num3;
    int counter3 = 1;
    int accumulator3 = 1;
    printf("Enter a number: ");
    scanf("%d", &num3);

startExample3:
    if (counter3 < num3)
    {
        accumulator3 *= counter3 + 1;
        counter3 += 1;
        goto startExample3;
    }
    printf("Factorial of %d is: %d", num3, accumulator3);
}
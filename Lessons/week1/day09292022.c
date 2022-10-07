#include <stdio.h>

// MAIN FUNCTIONS
main()
{
    /* printf("Wlcome\n");
     */
    // PRINT A STATEMENT
    float sum, diff, prod;
    float quo, num1, num2;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // PROCESS
    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    quo = num1 / num2;

    // DISPLAY
    printf("Sum: %0.2f\n", sum);
    printf("Difference: %0.2f\n", diff);
    printf("Product: %0.2f\n", prod);
    printf("Quotient: %0.2f\n", quo);
}

#include <stdio.h>

/*
Derick James M. Espinosa
BSIT-S-T-1A-T

Computer Programming 1 - Machine Problem 2
Number 3:
3. Write a program in which the user can enter two numbers(integers).  If both numbers are zero then print the message “ Two zeros”.  If the numbers are not both zero, then print either “FIRST” or “SECOND” depending on which number is bigger. If the numbers are the same(but not both zero) then print “EQUAL”.

 */

int main()
{
    int num1, num2;
    printf("\nEnter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    if (num1 == 0 && num2 == 0)
    {
        printf("Two Zeros\n");
    }
    else if (num1 == num2)
    {
        printf("EQUALS\n");
    }
    else if (num1 > num2)
    {
        printf("FIRST\n");
    }
    else
    {
        printf("SECOND\n");
    }

    return 0;
}
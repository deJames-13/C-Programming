#include <stdio.h>

/*
Derick James M. Espinosa
BSIT-S-T-1A-T

Computer Programming 1 - Machine Problem 2
numer 4:
4. Write a program which allow the user to enter position code(integer) of an employee.  Display on the screen the equivalent actual word code  based on the following condition.
Position Code                                   	Actual Word Code
            1                                          	Messenger
            2                                         	Encoder
            3                                          	Programmer
            4                                          	System Analyst
            5                                          	Server Engineer
            6                                          	Network Administrator

Only numbers from 1-6 are valid codes.


 */

int main()
{
    int pos;

    printf("Enter position code: ");
    scanf("%d", &pos);

    if (pos == 1)
    {
        printf("Messenger\n");
    }
    else if (pos == 2)
    {
        printf("Encoder\n");
    }
    else if (pos == 3)
    {
        printf("Programmer\n");
    }
    else if (pos == 4)
    {
        printf("System Analyst\n");
    }
    else if (pos == 5)
    {
        printf("Server Engineer\n");
    }
    else if (pos == 6)
    {
        printf("Network Administrator\n");
    }
    else
    {
        printf("Invalid position code.\nValid codes are from 1-6.\n");
    }

    return 0;
}
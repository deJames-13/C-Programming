
/*
Derick James M. Espinosa
BSIT-S-T-1A-T

Computer Programming 1 - Machine Problem 2
Number 2:
2. Write a program that allows the user to enter a number of pollution readings(integers).  As each pollution reading is entered the program should test the reading and print one of the following messages :

o   Comfortable (for readings less than 30)
o   Moderate(for readings less from 30 to 60 inclusive)
o   Dangerous(for readings over 60)

The program should stop when the user enters any negative pollution reading.


 */
#include <stdio.h>
int main()
{
    int p_reading;

repeat:
    printf("Enter a pollution reading: ");
    scanf("%d", &p_reading);

    if (p_reading >= 0 && p_reading < 30)
    {
        printf("Comfortable\n");
    }
    else if (p_reading >= 30 && p_reading <= 60)
    {
        printf("Moderate\n");
    }
    else if (p_reading > 60)
    {
        printf("Dangerous\n");
    }
    if (p_reading < 0)
    {
        printf("Program stopped.\n");
    }
    else
    {
        goto repeat;
    }

    return 0;
}

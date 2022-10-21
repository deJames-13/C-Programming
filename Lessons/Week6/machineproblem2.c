/*perseus*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>
void main()
{
    // DECLARATION OF VARIABLES
    char ans;
    int netSal;
    int salary;
    // Hiniwahiwalay ko ung counter, accumulator at ave, based sa SALARY.
    // LowSalary: <= 4000
    // MidSalaty: <= 34999
    // HighSalary: > 34999
    int cLowSal = 0, aLowSal = 0; // c for counter, a for accumulator
    int cMidSal = 0, aMidSal = 0;
    int cHighSal = 0, aHighSal = 0;
    int aveLowSal = 0; // ave for average
    int aveMidSal = 0;
    int aveHighSal = 0;
repeat:
    system("cls");
    // INPUTS
    printf("\nEnter your salary: ");
    scanf("%d", &salary);
    // PROCESS
    if (salary >= 0 && salary <= 4000)
    {
        cLowSal += 1;
        aLowSal = aLowSal + salary;
        aveLowSal = aLowSal / cLowSal;
    }
    else if (salary >= 4001 && salary <= 34999)
    {
        cMidSal += 1;
        aMidSal = aMidSal + salary;
        aveMidSal = aMidSal / cMidSal;
    }
    else
    {
        cHighSal += 1;
        aHighSal = aHighSal + salary;
        aveHighSal = aHighSal / cLowSal;
    }
    netSal = aveLowSal + aveMidSal + aveHighSal;
    // OUPUTS
    printf("\nOutput for salary that is less than or equal to 4000:\nCounted Salary: %d\nAccumulated Salary: %d\nAverage Salary: %d\n\n", cLowSal, aLowSal, aveLowSal);
    printf("Output for salary that is less than or equal to 34999:\nCounted Salary: %d\nAccumulated Salary: %d\nAverage Salary: %d\n\n", cMidSal, aMidSal, aveMidSal);
    printf("Output for salary that is greater than 34999:\nCounted Salary: %d\nAccumulated Salary: %d\nAverage Salary: %d\n\n", cHighSal, aHighSal, aveHighSal);
    printf("The Net Salary for all input is: %d\n", netSal);
    if (salary > 0)
    {
    ask:
        printf("\nDo you want to continue? ");
        ans = tolower(getch());
        if (ans == 'y')
        {
            goto repeat;
        }
        else if (ans == 'n')
        {
            exit(0);
        }
        else
        {
            goto ask;
        }
        printf("Program Terminated.\n");
    }
}
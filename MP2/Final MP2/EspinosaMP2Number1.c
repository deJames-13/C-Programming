
/*
Derick James M. Espinosa
BSIT-S-T-1A-T

Computer Programming 1 - Machine Problem 2
Number 1:
1. Write a program that allows the users to enter employee salaries.   Calculate and display the amount of tax payable on that salary and the net salary(after-tax).  Use the simple tax rule.
    Salaries from P0 to P4000: no tax payable.
    Salaries fromP4001 to P34999: tax at 30%
    Salaries 35000 or above: tax at 48%
When the user enters any salary which is less than zero, the program should be terminated.


 */
#include <stdio.h>

int main()
{
    int salary;

repeat:
    printf("\nEnter your salary: ");
    scanf("%d", &salary);

    if (salary >= 0 && salary <= 4000)
    {
        printf("You don't have to pay tax.\n");
    }
    else if (salary >= 4001 && salary <= 34999)
    {
        float netSalary = salary - (salary * 0.30);
        printf("You have to pay a 30%% tax on your %d salary.\n", salary);
        printf("Your salary after the tax is: %0.2f\n", netSalary);
    }
    else if (salary >= 35000)
    {
        float netSalary = salary - (salary * 0.48);
        printf("You have to pay a 48%% tax on your %d salary.\n", salary);
        printf("Your salary after the tax is: %0.2f\n", netSalary);
    }
    if (salary > 0)
    {
        goto repeat;
    }
    printf("\nProgram terminated.\n");

    return 0;
}

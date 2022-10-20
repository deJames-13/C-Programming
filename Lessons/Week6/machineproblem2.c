#include <stdio.h>

void main()
{
    char *output;
    float netSal;
    int salary;
    int cLowSal = 0, aLowSal = 0;
    int cMidSal = 0, aMidSal = 0;
    int cHighSal = 0, aHighSal = 0;
    int aveLowSal = 0;
    int aveMidSal = 0;
    int aveHighSal = 0;

repeat:
    printf("\nEnter your salary: ");
    scanf("%d", &salary);
    output = "";

    if (salary >= 0 && salary <= 4000)
    {
        cLowSal += 1;
        aLowSal = aLowSal + salary;
        aveLowSal = aLowSal / cLowSal;
    }
    else if (salary >= 4001 && salary <= 34999)
    {
        netSal = salary - (salary * 0.30);
        cMidSal += 1;
        aMidSal = aMidSal + salary;
        aveMidSal = aMidSal / cMidSal;
    }
    else if (salary > 34999)
    {
        netSal = salary - (salary * 0.48);
        cHighSal += 1;
        aHighSal = aHighSal + salary;
        aveHighSal = aHighSal / cLowSal;
    }
    printf("\nOut for salary that is less than or equal to 4000:\nCounted Salary: %d\nAccumulated Salary: %d\nAverage Salary: %d\nNet Salary Salary: %d\n\n", cLowSal, aLowSal, aveLowSal, netSal);
    printf("Out for salary that is less than or equal to 34999:\nCounted Salary: %d\nAccumulated Salary: %d\nAverage Salary: %d\nNet Salary Salary: %d\n\n", cMidSal, aMidSal, aveMidSal, netSal);
    printf("Out for salary that is greater than 34999:\nCounted Salary: %d\nAccumulated Salary: %d\nAverage Salary: %d\nNet Salary Salary: %d\n\n", cHighSal, aHighSal, aveHighSal, netSal);

    if (salary > 0)
    {
        goto repeat;
    }
    printf("\nProgram terminated.\n");
}
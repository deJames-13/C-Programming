#include <stdio.h>
#include <conio.h>
#include <windows.h>

void main()
{
    // Declaration of VARIABLEs
    int p_reading;
    // created counters for each level of readings
    // cLow: < 30
    // cMid: <= 60
    // cHigh: > 60
    // counter4: 25 and 75
    int cLow = 0, cMid = 0, cHigh = 0; // c for counter; cLow: "counter for Low"
    int counter4 = 0;

repeat:
    // INPUTS
    printf("\n\nEnter a pollution reading: ");
    scanf("%d", &p_reading);
    char *output = ""; // A STRING VARIABLE forda message after the process

    // PROCESS
    printf("%d\n", p_reading);

    if (p_reading == 25 || p_reading == 75)
    {
        counter4 += 1;
    }
    if (p_reading >= 0 && p_reading < 30)
    {
        output = "Comfortable"; // changing the output
        cLow += 1;              // incrementing the counters
    }
    else if (p_reading >= 30 && p_reading <= 60)
    {
        output = "Moderate";
        cMid += 1;
    }
    else if (p_reading > 60)
    {
        output = "Dangerous";
        cHigh += 1;
    }

    // OUTPUTS
    printf("\nThe pollution readings says:\n");
    printf("%s\n", output);
    printf("\nCounters for readings:\n");
    printf("Comfortable: %d\n", cLow);
    printf("Moderate: %d\n", cMid);
    printf("Dangerous: %d\n", cHigh);
    printf("25 and 75: %d\n", counter4);

    if (p_reading > 0)
    {
    ask:
        printf("\nDo you want to continue? (Y/N)");
        char ans = tolower(getch());
        if (ans == 'y')
        {
            goto repeat;
        }
        else if (ans == 'n')
        {
            printf("\nProgram Terminated.\n");
            exit(0);
        }
        else
        {
            system("cls");
            goto ask;
        }
    }
    printf("\nProgram Terminated.\n");
}
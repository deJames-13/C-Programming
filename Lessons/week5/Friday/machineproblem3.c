#include <stdio.h>
#include <windows.h>
#include <conio.h>

void main()
{
    int grade;
    char letterGrade;
    char ans;
    char *remark;
    // Counters (c for counter)
    // 1: A, 2: B, 3: C, 4: D, 5: F, 6: PASSED, 7: FAILED
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0;

repeat:
    // I: Input the grade
    printf("\nEnter the student's grade: ");
    scanf("%d", &grade);

    // if the number is negative, end the process
    if (grade < 0)
    {
        printf("Value is negative.\nProgram Terminated.\n");
        exit(0);
    }

    // Checks if the grade is in the range of 0 to 100, 0 and over 100 are invalid;
    if (grade > 0 && grade <= 100)
    {
        // P: Process the grade and convert it to equivalent letter if the condtition is true;
        switch (grade)
        {
        case 90 ... 100:
            letterGrade = 'A'; // Assigning the equivalent letter
            c1 += 1;           // incrementing the counter for equivalent letter
            break;
        case 80 ... 89:
            letterGrade = 'B';
            c2 += 1;
            break;
        case 70 ... 79:
            letterGrade = 'C';
            c3 += 1;
            break;
        case 60 ... 69:
            letterGrade = 'D';
            c4 += 1;
            break;
        default:
            letterGrade = 'F';
            c5 += 1;
            break;
        }
        if (grade >= 60)
        {
            remark = "PASSED";
            c6 += 1;
        }
        else
        {
            remark = "FAILED";
            c7 += 1;
        }
    }
    else
    {
        // repeats the process if invalid
        printf("Invalid grade. Please try again.\n");
        goto repeat;
    }

    // O: Outputs the equivalent letter for the grade and counters.
    printf("The letter grade equivalent is: %c\n", letterGrade);
    printf("Remark: %s\n", remark);
    printf("\nCounted Values for the number of students who got, \n");
    printf("A: %d\n", c1);
    printf("B: %d\n", c2);
    printf("C: %d\n", c3);
    printf("D: %d\n", c4);
    printf("F: %d\n", c5);
    printf("PASSED: %d\n", c6);
    printf("FAILED: %d\n", c7);

// asks the user to continue or not
ask:
    printf("\nDo you want to continue (y/n)? ");
    ans = getch();
    if (ans == 'Y' || ans == 'y')
    {
        goto repeat;
    }
    else if (ans == 'N' || ans == 'n')
    {
        printf("Program Terminated.\n");
        exit(0);
    }
    else
    {
        goto ask;
    }
}
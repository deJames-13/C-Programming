#include <stdio.h>
#include <windows.h>
#include <conio.h>

void main()
{
    int grade;
    char letterGrade;
    char ans;
    char *remark;
    // Counters
    // 1: A, 2: B, 3: C, 4: D, 5: F, 6: PASSED, 7: FAILED
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0;

repeat:
    // I: Input the grade
    printf("\nEnter the student's grade: ");
    scanf("%d", &grade);

    // Checks if the grade is in the range of 0 to 100, 0 and over 100 are invalid;
    if (grade > 0 && grade <= 100)
    {
        // P: Process the grade and convert it to equivalent letter if the condtition is true;
        switch (grade)
        {
        case 90 ... 100:
            letterGrade = 'A';
            break;
        case 80 ... 89:
            letterGrade = 'B';
            break;
        case 70 ... 79:
            letterGrade = 'C';
            break;
        case 60 ... 69:
            letterGrade = 'D';
            break;
        default:
            letterGrade = 'F';
            break;
        }
        if (grade >= 60)
        {
            remark = "PASSED";
        }
        else
        {
            remark = "FAILED";
        }
    }
    else
    {
        // repeats the process if invalid
        printf("Invalid grade. Please try again.\n");
        goto repeat;
    }

    // O: Outputs the equivalent letter for the grade.
    printf("The letter grade equivalent is: %c\n", letterGrade);

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
        exit(0);
    }
    else
    {
        goto ask;
    }
}
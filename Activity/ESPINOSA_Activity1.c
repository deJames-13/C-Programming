#include <stdio.h>
#include <windows.h>
#include <conio.h>

int main()
{
    int grade;
    char letterGrade;
    char ans;

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

    return 0;
}

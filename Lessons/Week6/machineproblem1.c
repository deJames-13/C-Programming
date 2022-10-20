#include <stdio.h>
#include <windows.h>
#include <conio.h>

void main()
{
    int age;
    char ans;
    int cKid = 0;
    int cTeenager = 0;
    int cAdult = 0;
    int cOld = 0;

repeat:
    printf("\nEnter your age: ");
    scanf("%d", &age);
    char *output = "";

    if (age > 0)
    {
        if (age < 13)
        {
            output = "You aren't a teenager.";
            cKid += 1;
        }
        else if (age < 20)
        {
            output = "You are a teenager.";
            cTeenager += 1;
        }
        else if (age < 60)
        {
            output = "You are still young.";
            cAdult += 1;
        }
        else
        {
            output = "You are past the middle age.";
            cOld += 1;
        }
        printf("\nYou are %d years old.\n", age);
        printf("\n%s.\n", output);

        printf("\nThe total number of:\n");
        printf("Kids: %d\n", cKid);
        printf("Teenager: %d\n", cTeenager);
        printf("Adult: %d\n", cAdult);
        printf("Old: %d\n", cOld);
    }

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
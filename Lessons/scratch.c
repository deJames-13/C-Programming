#include <stdio.h>
#include <windows.h>

void main()
{
repeat:
    int age = 0;
    printf("\nEnter your age: ");
    scanf("%d", &age);
    char *output = "";

    if (age > 0)
    {
        if (age < 13)
        {
            output = "You aren't a teenager.";
        }
        else if (age < 20)
        {
            output = "You are a teenager.";
        }
        else if (age < 60)
        {
            output = "You are still young.";
        }
        else
        {
            output = "You are past the middle age.";
        }
        printf("\nYou are %d years old.\n", age);
        printf("\n%s.\n", output);
    }

ask:
    printf("Do you want to continue? ");
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
}
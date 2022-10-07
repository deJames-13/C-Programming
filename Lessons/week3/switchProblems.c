#include <stdio.h>
#include <windows.h>

int main()
{
    int pos;
    char ans;
repeat:
    system("cls");
    printf("\nEnter your position code: ");
    scanf("%d", &pos);
    /*
    if (pos < 0 || pos > 6)
    {
        goto repeat;
    }

    switch (pos)
    {
    case 1:
        printf("Messenger\n");
        break;
    case 2:
        printf("Encoder\n");
        break;
    case 3:
        printf("Programmer\n");
        break;
    case 4:
        printf("System Analyst\n");
        break;
    case 5:
        printf("Server Engineer\n");
        break;
    case 6:
        printf("Network Administrator");
    }
    */

    if (pos > 0 && pos <= 6)
    {
        switch (pos)
        {
        case 1:
            printf("Messenger\n");
            break;
        case 2:
            printf("Encoder\n");
            break;
        case 3:
            printf("Programmer\n");
            break;
        case 4:
            printf("System Analyst\n");
            break;
        case 5:
            printf("Server Engineer\n");
            break;
        case 6:
            printf("Network Administrator");
        }
    }
    else
    {
        goto repeat;
    }

ask:
    printf("\nDo you want to continue: y/n\n");
    ans = getch();
    if (ans == 'y' || ans == 'Y')
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

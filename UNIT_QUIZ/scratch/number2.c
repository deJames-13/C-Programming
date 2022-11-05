#include <stdio.h>
#include <windows.h>
#include <conio.h>

int main()
{
    int type = 0;
    int cInfant = 0, cChild = 0, cTeen = 0, cAdult = 0;
    float ave = 0;
repeat:
    printf("\n1: Infant\n2: Child\n3:Teen\n4: Adult\nEnter type of people: ");
    scanf("%d", &type);

    if (!(type > 0 && type <= 4))
    {
        goto repeat;
    }
    else if (type < 0)
    {
        exit(0);
    }

    switch (type)
    {
    case 1:
        cInfant++;
        break;
    case 2:
        cChild++;
        break;
    case 3:
        cTeen++;
        break;
    case 4:
        cAdult++;
        break;
    }
    ave = (cInfant + cChild + cTeen + cAdult) / 4.0;

    printf("Counted values\n");
    printf("\nInfant: %d", cInfant);
    printf("\nChild: %d", cChild);
    printf("\nTeenager: %d", cTeen);
    printf("\nAdult: %d", cAdult);

    printf("\n\nAverage: %0.2f\n", ave);

ask:
    printf("\nDo you want to continue (Yy/Nn)? ");
    char ans = tolower(getch());
    if (ans == 'y')
    {
        // system("cls");
        goto repeat;
    }
    else if (ans == 'n')
    {
        printf("\nProgram Exited.");
        exit(0);
    }
    else
    {
        goto ask;
    }

    return 0;
}
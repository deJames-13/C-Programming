#include <stdio.h>
#include <windows.h>
#include <conio.h>

void main()
{
float tolerance = 0, a1 = 0, a2 = 0, a3 = 0, a4 = 0;
char *status;
repeat:
printf("\n\nTolerance reading (in %%): ");
scanf("%f", &tolerance);

if (tolerance < 0.1)
{
status = "Space Exploration";
a1 += tolerance;
}
else if (tolerance >= 0.1 && tolerance < 1)
{
status = "Military Grade";
a2 += tolerance;
}
else if (tolerance >= 1 && tolerance < 10)
{
status = "Commercial Grade";
a3 += tolerance;
}
else if (tolerance >= 10)
{
status = "Toy Grade";
a4 += tolerance;
}
printf("Specification Status: %s\n", status);
printf("\nAccumulated Values\n");
printf("\nLess Than 0.1%%: %0.2f", a1);
printf("\nGreater Than or Equal 0.1%% and Less Than 1%%: %0.2f", a2);
printf("\nGreater Than or Equal 1%% and Less Than 10%%: %0.2f", a3);
printf("\nGreater Than or Equal 10%%: %0.2f", a4);

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
}

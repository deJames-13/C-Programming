#include <stdio.h>

int main()
{
    int g1, g2, g3, g4, average;
    printf("Enter first grade: ");
    scanf("%d", &g1);
    printf("Enter second grade: ");
    scanf("%d", &g2);
    printf("Enter three grade: ");
    scanf("%d", &g3);
    printf("Enter last grade: ");
    scanf("%d", &g4);

    average = (g1 + g2 + g3 + g4) / 4;
    printf("The average score is: %d\n", average);
    return 0;
}
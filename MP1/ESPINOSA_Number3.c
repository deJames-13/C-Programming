#include <stdio.h>

int main()
{
    float time, DEPTH, g;
    g = 9.8;
    printf("Enter the time (seconds): ");
    scanf("%f", &time);

    DEPTH = 0.5 * g * time * time;
    printf("The depth of the mineshaft in meters is: %0.2f\n", DEPTH);

    return 0;
}
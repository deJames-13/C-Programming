#include <stdio.h>

void main()
{
    int p_reading;

repeat:
    printf("Enter a pollution reading: ");
    scanf("%d", &p_reading);

    if (p_reading >= 0 && p_reading < 30)
    {
        printf("Comfortable\n");
    }
    else if (p_reading >= 30 && p_reading <= 60)
    {
        printf("Moderate\n");
    }
    else if (p_reading > 60)
    {
        printf("Dangerous\n");
    }
    if (p_reading < 0)
    {
        printf("Program stopped.\n");
    }
    else
    {
        goto repeat;
    }
}
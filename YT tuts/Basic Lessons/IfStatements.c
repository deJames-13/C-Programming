#include <stdio.h>
#include <ctype.h>

int main()
{
    char unit{};
    float temp{};

    printf("Enter the unit (C for Celsius, F for Farenheit): ");
    scanf("%c", &unit);

    unit = toupper(unit);
    printf("Enter the temperature: ");
    scanf("%f", &temp);
    if (unit == 'C')
    {
        temp = (temp * 9 / 5) + 32;
        printf("Farenheit: %0.2f\n", temp);
    }
    else if (unit == 'F')
    {
        temp = (temp + 32) * 5 / 9;
        printf("Celsius: %0.2f\n");
    }
    else
    {
        printf("\nUnit is not recognized.");
    }
    return 0;
}
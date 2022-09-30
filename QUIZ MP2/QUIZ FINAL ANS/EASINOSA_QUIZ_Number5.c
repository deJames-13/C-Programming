#include <stdio.h>
/*
Derick James M. Espinosa
BSIT-S-T-1A-T
Computer Programming Quiz 1

Number 5:
Conversion of Fahrenheit to Celsius C = (f – 32)/1.800

*/

void main()
{
    printf("\n");

    float farenheit;
    printf("Enter temperature in Farenheit: ");
    scanf("%f", &farenheit);

    float FARENHEIT_TO_CELCIUS = (farenheit - 32.0) / 1.800;
    printf("The temperature from Farenheit to Celsius is: %0.2f\n", FARENHEIT_TO_CELCIUS);
}
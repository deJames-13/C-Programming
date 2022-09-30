#include <stdio.h>

/*
Derick James M. Espinosa
BSIT-S-T-1A-T
Computer Programming Quiz 1

Number 2:
Write a program that reads a weight in pounds and ounces and then outputs the equivalent weight in kilograms and grams.  There are 2.2046 pounds in a kilogram, 1000 grams in a kilogram and 16 ounces in a pound.

*/

void main()
{
    printf("\n");

    float pounds, ounces;
    float OUNCE_TO_POUND = 1.0 / 16.0;
    float POUND_TO_KILO = 1.0 / 2.2046;
    float KILO_TO_GRAM = 1000;

    printf("Weight in pounds: ");
    scanf("%f", &pounds);
    printf("Weight in ounces: ");
    scanf("%f", &ounces);

    // Conversion for pounds to kilogram and grams:
    float poundsToKilo = pounds * POUND_TO_KILO;
    float poundsToGrams = poundsToKilo * KILO_TO_GRAM;
    // Conversion for ounces to kilogram and grams:
    float ouncesToKilo = ounces * OUNCE_TO_POUND * POUND_TO_KILO;
    float ouncesToGrams = ouncesToKilo * KILO_TO_GRAM;

    printf("\nThe conversion for pounds to kilo is: %0.4f\n", poundsToKilo);
    printf("The conversion for pounds to grams is: %0.4f\n", poundsToGrams);
    printf("\nThe conversion for ounces to kilo is: %0.4f\n", ouncesToKilo);
    printf("The conversion for ounces to grams is: %0.4f\n", ouncesToGrams);
}
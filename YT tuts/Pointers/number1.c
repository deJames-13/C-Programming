#include <stdio.h>

/*
Derick James M. Espinosa
BSIT-S-T-1A-T
Computer Programming Quiz 1

Number 1:
Write a program that reads in a length in feet and inches and then outputs the equivalent length in meters and centimeters.  There are 0.3048 meters in a foot, 100 centimeters in a meter, and 12 inches in a foot.

*/

void main()
{
    printf("\n");

    float feet, inches;
    float INCHES_TO_FOOT = 1.0 / 12.0;
    float FOOT_TO_METER = 0.3048;
    float METER_TO_CENTIMETER = 100;

    // POINTERS
    /*
        BASICALLY POINTERS ARE USED TO REFERENCE INSTEAD OF STORE VALUE
        * (asteris) near a data type means that the variable we are assigning to is a pointer
        & - means the address of
        * alone means that we are calling the pointer

            int x = 4; normal variable declaration
            int *pX = &x; pointer declaration. read as "integer of pointer to X is pointed by that thing in address of (&) x"
            int y = *pX; read as "integer y is dereferencing the value pointed by pointer X (pX)"
    */
    float *pINCHES_TO_FOOT = &INCHES_TO_FOOT;
    float *pFOOT_TO_METER = &FOOT_TO_METER;
    float *pMETER_TO_CENTIMETER = &METER_TO_CENTIMETER;

    printf("Enter the length for feet: ");
    scanf("%f", &feet);
    printf("Enter the length for inches: ");
    scanf("%f", &inches);

    // Conversion for feet to meters and centimeters
    float feetToMeters = feet * *pFOOT_TO_METER;
    float feetToCentimeters = feetToMeters * *pMETER_TO_CENTIMETER;
    printf("\nThe conversion for feet to meters is: %0.4f\n", feetToMeters);
    printf("The conversion for feet to centimeters is: %0.4f\n", feetToCentimeters);

    // Conversion for inches to meters and centimeters
    float inchesToMeters = inches * INCHES_TO_FOOT * *pFOOT_TO_METER;
    float inchesToCentimeters = inchesToMeters * *pMETER_TO_CENTIMETER;

    printf("\nThe conversion for inches to meters is: %0.4f\n", inchesToMeters);
    printf("The conversion for inches to centimeters is: %0.4f\n", inchesToCentimeters);
}
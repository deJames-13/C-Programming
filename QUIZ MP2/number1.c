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

    printf("Enter the length for feet: ");
    scanf("%f", &feet);
    printf("Enter the length for inches: ");
    scanf("%f", &inches);

    // Conversion for feet to meters and centimeters
    float feetToMeters = feet * FOOT_TO_METER;
    float feetToCentimeters = feetToMeters * METER_TO_CENTIMETER;
    printf("\nThe conversion for feet to meters is: %0.4f\n", feetToMeters);
    printf("The conversion for feet to centimeters is: %0.4f\n", feetToCentimeters);

    // Conversion for inches to meters and centimeters
    float inchesToMeters = inches * INCHES_TO_FOOT * FOOT_TO_METER;
    float inchesToCentimeters = inchesToMeters * METER_TO_CENTIMETER;

    printf("\nThe conversion for inches to meters is: %0.4f\n", inchesToMeters);
    printf("The conversion for inches to centimeters is: %0.4f\n", inchesToCentimeters);
}

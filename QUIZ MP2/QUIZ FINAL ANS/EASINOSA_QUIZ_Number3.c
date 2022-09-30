#include <stdio.h>
/*
Derick James M. Espinosa
BSIT-S-T-1A-T
Computer Programming Quiz 1

Number 3:
Volume of a cylinder  = pi * r * r * h

*/

void main()
{
    printf("\n");

    float height, radius;
    float PI = 3.14;

    printf("Enter the height for cylinder: ");
    scanf("%f", &height);
    printf("Enter the radius for cylinder: ");
    scanf("%f", &radius);

    float VOLUME_OF_CYLINDER = PI * radius * radius * height;
    printf("\nThe volume of the cylinder is: %0.2f\n", VOLUME_OF_CYLINDER);
}
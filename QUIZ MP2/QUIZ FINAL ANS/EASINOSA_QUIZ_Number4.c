#include <stdio.h>
/*
Derick James M. Espinosa
BSIT-S-T-1A-T
Computer Programming Quiz 1

Number 4:
Volume of a cone  = pi * r * r * (h/3)

*/

void main()
{
    printf("\n");

    float height, radius;
    float PI = 3.14;

    printf("Enter the height for the cone: ");
    scanf("%f", &height);
    printf("Enter the radius for the cone: ");
    scanf("%f", &radius);

    float VOLUME_OF_CONE = PI * radius * radius * (height / 3.0);
    printf("\nThe volume of the cone is: %0.2f\n", VOLUME_OF_CONE);
}
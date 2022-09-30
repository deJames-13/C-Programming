#include <stdio.h>

int main()
{
    float length, area;
    printf("Enter the length of a square: ");
    scanf("%f", &length);
    area = length * length;
    printf("The area of a square is: %0.2f\n", area);

    return 0;
}

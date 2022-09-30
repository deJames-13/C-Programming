#include <stdio.h>

int main()
{
    float tendered, cost, change;
    printf("Enter the amount tendered: ");
    scanf("%f", &tendered);
    printf("Enter the cost item: ");
    scanf("%f", &cost);

    change = tendered - cost;
    printf("The change due is: %0.2f\n", change);
    return 0;
}
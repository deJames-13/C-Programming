#include <stdio.h>
#include <windows.h>
#include <conio.h>

void main()
{
    // Declaring the variables
    char ans;
    float prodPrice, prodQuantity = 0, netAmount = 0, taxDue = 0, amountDue = 0;
    float TAX_RATE = 0.05;
    float accumulator = 0;

repeat:
    // INPUT
    printf("\nEnter the price of the product: ");
    scanf("%f", &prodPrice);
    printf("Enter the quantity of the product: ");
    scanf("%f", &prodQuantity);

    // PROCESS
    netAmount = prodPrice * prodQuantity;
    taxDue = netAmount * TAX_RATE;
    amountDue = netAmount + taxDue;
    accumulator = accumulator + taxDue;

    // OUTPUT
    printf("\nTotal Net Amount Due : %.2f\n", netAmount);
    printf("Sales Tax Due: %.2f\n", taxDue);
    printf("Total Amount Due: %.2f\n", amountDue);
    printf("\nAccumulated Total Sales Tax: %.2f\n", accumulator);

ask:
    printf("\nDo you want to continue? (Yy/Nn) ");
    ans = tolower(getch());
    if (ans == 'y')
    {
       // system("cls");
        goto repeat;
    }
    else if (ans == 'n')
    {
        exit(0);
    }
    else
    {
        goto ask;
    }
    printf("Program Terminated.\n");
}

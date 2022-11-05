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
    scanf("%f", &price);
    scanf("");
    printf("Enter the quantity of the product: ");
    scanf("%f", &prodQuantity);

    // PROCESS
    netAmt = price * quantity; // multiply base sa kung ilan binili, kung sampu edi times 10
    std = netAmt * TAX_RATE;   // tax
    amt_due = netAmt + std;    // aadd ung tax sa total nung binili tapos mapupunta kay marc*s ung tax
    acc_std = acc_std + std;   // acc

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

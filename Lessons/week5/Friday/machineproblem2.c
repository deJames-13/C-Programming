#include <stdio.h>
#include <windows.h>
#include <conio.h>

void main()
{
    // Declaring the variables
    char ans;
    float price = 0, quantity = 1.0, netAmt = 0, std = 0, amt_due = 0;
    float TAX_RATE = 0.05;
    float acc_std = 0;

repeat:
    // INPUT
    printf("\nEnter the price of the product: ");
    scanf("%f", &price);
    scanf("");
    printf("Enter the quantity of the product: ");
    scanf("%f", &quantity);

    // PROCESS
    netAmt = price * quantity; // multiply base sa kung ilan binili, kung sampu edi times 10
    std = netAmt * TAX_RATE;   // tax
    amt_due = netAmt + std;    // aadd ung tax sa total nung binili tapos mapupunta kay marcos ung tax
    acc_std = acc_std + std;   // acc

    // OUTPUT
    printf("The Net Amount Due is: %.2f\n", netAmt);
    printf("The Sales Tax Due is: %.2f\n", std);
    printf("The Total Amount Due is: %.2f\n", amt_due);
    printf("\nAccumulated Total Sales Tax: %.2f\n", acc_std);

ask:
    printf("\nDo you want to continue? (Yy/Nn) ");
    ans = tolower(getch());
    if (ans == 'y')
    {
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
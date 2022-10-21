#include <stdio.h>
#include <windows.h>
#include <conio.h>

void main()
{
    char ans;
    float price, quant = 1.0, netAmt, std, amt_due;
    float TAX_RATE = 0.05;
    float acc_std = 0;

repeat:
    printf("\nEnter the price of the product: ");
    scanf("%f", &price);
    scanf("");
    printf("Enter the quantity of the product: ");
    printf("%f\n", quant);

    netAmt = price * quant;
    std = netAmt * TAX_RATE;
    amt_due = netAmt + std;
    acc_std = acc_std + std;

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
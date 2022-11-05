#include <stdio.h>
#include <windows.h>
#include <conio.h>
main()
{
	int amt = 0;
	float incomeTax = 0, salary = 0, taxRate = 0, taxAmount;

repeat:
	// INPUT
	printf("\nEnter the amount: ");
	scanf("%d", &amt);

	// PROCESS
	float X = amt;
	switch (amt)
	{
	case 20001 ... 22000:
		taxRate = 0.38;
		taxAmount = 5230;
		break;
	case 22001 ... 26000:
		taxRate = 0.40;
		taxAmount = 5290;
		break;
	case 26001 ... 32000:
		taxRate = 0.45;
		taxAmount = 7590;
		break;
	case 32001 ... 38000:
		taxRate = 0.50;
		taxAmount = 10290;
		break;
	case 38001 ... 44000:
		taxRate = 0.55;
		taxAmount = 13290;
		break;
	}
	// OUTPUT
	if (amt < 20000 || amt > 44000)
	{
		printf("Your amount is not taxable.");
	}
	else
	{
		incomeTax = X - (taxAmount + (taxRate * X));
		printf("Taxable Income: %d\n", amt);
		printf("The income tax for %d the: %0.2f\n", amt, incomeTax);
	}

ask:
	printf("\nDo you want to continue (Yy/Nn)? ");
	char ans = tolower(getch());
	if (ans == 'y')
	{
		// system("cls");
		goto repeat;
	}
	else if (ans == 'n')
	{
		printf("\nProgram Exited.");
		exit(0);
	}
	else
	{
		goto ask;
	}
}

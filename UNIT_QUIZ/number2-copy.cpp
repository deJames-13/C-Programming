	#include <stdio.h>
	#include <windows.h>
	#include <conio.h>
	main(){
		int amt;
		int X = 0, incomeTax = 0, salary = 0, taxRate = 0, taxAmount;
		
		printf("Enter the amount: ");
		scanf("%d", &amt);
		
		switch(amt){
			case 20001 ... 22000:
				incomeTax = amt - (5230 + (.38*amt));
				break;
			case 22001 ... 26000:
				incomeTax = amt - (5290 + (.40*amt));
				break;
			case 26001 ... 32000:
				incomeTax = amt - (7590 + (.45*amt));
				break;
			case 32001 ... 38000:
				incomeTax = amt - (10290 + (.50*amt));
				break;
			case 38001 ... 44000:
				incomeTax = amt - (13290 + (.55*amt));
				break;
			
		}
		// OUTPUT
		if (amt < 20000|| amt > 44000){
			printf("Your amount is not taxable.");
		}
		else {
			printf("Taxable Income: %d\n", amt);
			printf("The income tax for %d the: %d\n", amt, incomeTax);
		}
		
		
	}

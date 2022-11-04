#include <stdio.h>
#include <windows.h>
#include <conio.h>

void main(){
	float tolerance = 0, aTolerance1=0, aTolerance2=0, aTolerance3=0, aTolerance4=0;
	char *status = 0;
repeat:
	system("cls");
	// INPUT
	printf("\nEnter the tolerance (in %%): ");
	scanf("%f", &tolerance);
	
	// PROCESS
	if(tolerance<0.1){
		status = "Space exploration";
		aTolerance1 += tolerance;
	}
	else if(tolerance>=0.1&&tolerance<1){
		status = "Military grade";
		aTolerance2 += tolerance;
	}
	else if(tolerance>=1&&tolerance<10){
		status = "Commercial grade";
		aTolerance3 += tolerance;
	}
	else if(tolerance>=10){
		status = "Toy grade";
		aTolerance4 += tolerance;
	}
	else{
		system("cls");
		printf("\nInvalid tolerance value.\n");
		goto repeat;
	}
	
	// OUTPUT
	printf("\n[OUTPUT]\n");
	printf("Tolerance Perccent: %.2f%%\n", tolerance);
	printf("Tolerance Status: %s\n", status);
	printf("\nAccumulated Values: \n");
	printf("Less than 0.1%%: %.2f%%\n", aTolerance1);
	printf("Greater than or equal to 0.1%% and less than 1%%: %.2f%%\n", aTolerance2);
	printf("Greater than or equal to 1%% and less than 10%%: %.2f%%\n", aTolerance3);
	printf("Greater than or equal to 10%%: %.2f%%\n", aTolerance4);
	
	ask:
		printf("\nDo you want to continue? (y/n) ");
		char ans = tolower(getch());
		if(ans=='y'){
			goto repeat;
		}
		else if(ans=='n'){
			printf("\nProgram ended.\n");
			exit(0);
		}
		else {
			goto ask;
		}
	
	
}
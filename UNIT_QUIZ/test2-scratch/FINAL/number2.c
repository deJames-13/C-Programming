#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <ctype.h>

void main()
{
	char name[30]; // para sa string values, gumagana
	// char *name; // di gumagana
	char *actual_pos = 0;
	int hours = 0, wageRate = 0, basicSalary = 0, overtimePay = 0, overtime = 0;
	char pos = 0;
repeat:
	printf("\nEnter your name: ");
	scanf("%s", &name);
	printf("Enter hours worked: ");
	scanf("%d", &hours);
	printf("Position Code\nM: \tMessenger\nE: \tEncoder\nT: \tTechnician\nP: \tProgrammer\nS: \tSystem Analyst\n");
	printf("\nEnter position code: ");
	scanf(" %c", &pos);

	pos = tolower(pos);
	switch (pos)
	{
	case 'm':
		actual_pos = "Messenger";
		wageRate = 250;
		break;
	case 'e':
		actual_pos = "Encoder";
		wageRate = 300;
		break;
	case 't':
		actual_pos = "Technician";
		wageRate = 350;
		break;
	case 'p':
		actual_pos = "Programmer";
		wageRate = 500;
		break;
	case 's':
		actual_pos = "System Analyst";
		wageRate = 600;
		break;
	default:
		printf("Error.\n");
		break;
	}

	if (hours > 40)
	{
		overtime = hours - 40;
		overtimePay = (wageRate * 0.5) * hours;
		// wageRate = wageRate * 1.5;
	}
	basicSalary = hours * wageRate + overtimePay;

	printf("\n[OUTPUT]\n");
	printf("Name: %s\n", name);
	printf("Hours work: %d\n", hours);
	printf("Wage rate: %d\n", wageRate);
	printf("Basic Salary: %d\n", basicSalary);
	printf("\nOvertime: %d\n", overtime);
	printf("Overtime Pay: %d\n", overtimePay);

ask:
	printf("\nDo you want to continue? (y/n) ");
	char ans = tolower(getch());
	if (ans == 'y')
	{
		// system("cls");
		goto repeat;
	}
	else if (ans == 'n')
	{
		printf("\nProgram ended.\n");
		exit(0);
	}
	else
	{
		goto ask;
	}
}
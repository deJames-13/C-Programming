#include <stdio.h>
#include <windows.h>
#include <conio.h>
int main()
{
	int pos_code;
	char pos = 0;
	// char *name = "name", *company = "comp", *department = "dep", *actual_pos = "";
	char name[30] = "", company[30] = "", department[30] = "", *actual_pos = "";
	int hours = 0;
	int paygradeA = 0;
	int paygradeB = 0;
	int dSSS = 200;
	int dPAG_IBIG = 100;
	int grossA = 0, grossB = 0;
	int w_taxA = 0, w_taxB = 0;
	int netSalaryA, netSalaryB = 0;
	int overtimePayA = 0, overtimePayB = 0;
	float taxRate = 0;
	int ot_hours = 0;

	printf("Enter your name: ");
	scanf("%s", &name);
	printf("Enter your company: ");
	scanf("%s", &company);
	printf("Enter your department: ");
	scanf("%s", &department);
	printf("Enter hours worked: ");
	scanf("%d", &hours);
	printf("Enter your position letter (M: 1 - E: 2 - T: 3 - P: 4 - S: 5): ");
	scanf(" %c", &pos);
	switch (pos)
	{
	case 'M':
		actual_pos = "Messenger";
		paygradeA = 5500;
		paygradeB = 6500;
		taxRate = 0.05;
		break;
	case 'E':
		actual_pos = "Encoder";
		paygradeA = 6500;
		paygradeB = 7500;
		taxRate = 0.06;
		break;
	case 'T':
		actual_pos = "T-Technician";
		paygradeA = 7500;
		paygradeB = 8500;
		taxRate = 0.07;
		break;
	case 'P':
		actual_pos = "Programmer";
		paygradeA = 10000;
		paygradeB = 10500;
		taxRate = 0.08;
		break;
	case 'S':
		actual_pos = "System Analyst";
		paygradeA = 12500;
		paygradeB = 12500;
		taxRate = 0.09;
		break;
	default:
		printf("Invalid Code.");
		break;
	}

	grossA = paygradeA / hours;
	grossB = paygradeB / hours;
	if (hours > 160)
	{
		ot_hours = hours - 160;
		overtimePayA = paygradeA * 0.5;
		paygradeA = paygradeA + overtimePayA;

		overtimePayB = paygradeB * 0.5;
		paygradeB = paygradeB + overtimePayB;
	}

	w_taxA = grossA * taxRate;
	w_taxB = grossB * taxRate;

	netSalaryA = grossA - (dSSS + dPAG_IBIG + w_taxA);
	netSalaryB = grossB - (dSSS + dPAG_IBIG + w_taxB);

	printf("Name:\t %s\n", name);
	printf("Company:\t %s\n", company);
	printf("Department:\t %s\n", department);
	printf("Actual Position:\t %s\n", actual_pos);
	printf("Hours worked: %d\n\n", hours);

	printf("[Values for Paygrade A]\n");
	printf("Paygrade A: %d\n", paygradeA);
	printf("Withholding Tax: %d\n", w_taxA);
	printf("Net Salary: %d\n", netSalaryA);
	printf("Overtime Pay: %d\n", overtimePayA);
	printf("\n[Values for Paygrade B]\n");
	printf("Paygrade B: %d\n", paygradeA);
	printf("Withholding Tax: %d\n", w_taxB);
	printf("Net Salary: %d\n", netSalaryB);
	printf("Overtime Pay: %d\n", overtimePayB);

	return 0;
}

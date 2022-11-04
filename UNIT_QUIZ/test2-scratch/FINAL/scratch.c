#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <ctype.h>

main ()
{
	int pos, workh, basal;
	char* name;
	char mes;
	
	printf ("POSITION\tDESCRIPTION\n");
	printf ("1. M\t\tMessenger\n");
	printf ("2. E\t\tEncoder\n");
	printf ("3. T\t\tTechnician\n");
	printf ("4. P\t\tProgrammer\n");
	printf ("5. S\t\tSystem Analyst\n\n");
	printf ("\nENTER HOW MANY HOURS YOU'VE WORK FOR ONE WEEK: ");
	scanf ("%d", &workh);
	printf ("\nENTER YOUR POSITION: ");
	scanf ("%d", &pos);
	
	switch (pos){
		case 1:
		mes = "Messenger";
		basal = workh * 250;
		break;
		
		case 2:
		mes = "Encoder";
		basal = workh * 300;
		break;
		
		case 3:
		mes = "Technician";
		basal = workh * 350;
		break;
		
		case 4:
		mes = "Programmer";
		basal = workh * 500;
		break;
		
		case 5:
		mes = "System Analyst";
		basal = workh * 600;
		break;		
		
	}
	
	printf ("EMPLOYEE NAME: %d", name);
	printf ("NUMBER OF HOURS WORKED: %d", workh);
	printf ("EMPLOYEE DESCRIPTION: ");
	printf ("WEEKLY SALARY: %d", basal);
	printf ("OVERTIME: ");
	
}
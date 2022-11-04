#include <stdio.h>
#include <windows.h>
#include <conio.h>

void main()
{
	/* Variables */
	int totalExams = 11;
	int totalItems = 100;
	char *remark = 0;
	char *grade = " ";
	// QUIZESS
	int quiz1 = 0, quiz2 = 0, quiz3 = 0;
	// UNIT TESTS
	int unit1 = 0, unit2 = 0, unit3 = 0;
	// MACHINE PROBLEMS
	int mp1 = 0, mp2 = 0, mp3 = 0, mp4 = 0;
	// Term Test
	int term_test = 0;

	// Counters
	int count_missing = 0;

	// Weighted
	float gquiz = 0;
	float gunit = 0;
	float gmp = 0;
	float gterm_test = 0;
	int weightedGrade = 0;

	float fgrade = 0;

ask_score:
	/* INPUTs */
	// QUIZESS
	printf("\n[ENTER QUIZ SCORES]\n");
	printf("Quiz 1: ");
	scanf("%d", &quiz1);
	if (quiz1 == 0)
		count_missing++;
	printf("Quiz 2: ");
	scanf("%d", &quiz2);
	if (quiz2 == 0)
		count_missing++;
	printf("Quiz 3: ");
	scanf("%d", &quiz3);
	if (quiz3 == 0)
		count_missing++;

	// UNIT TESTS
	printf("\n[UNIT TESTS SCORES]\n");
	printf("Unit Test 1: ");
	scanf("%d", &unit1);
	printf("Unit Test 2: ");
	scanf("%d", &unit2);
	printf("Unit Test 3: ");
	scanf("%d", &unit3);

	// MACHINE PROBLEMS
	printf("\n[ENTER MACHINE PROBLEMS SCORES]\n");
	printf("Machine Problem 1: ");
	scanf("%d", &mp1);
	printf("Machine Problem 2: ");
	scanf("%d", &mp2);
	printf("Machine Problem 3: ");
	scanf("%d", &mp3);
	printf("Machine Problem 4: ");
	scanf("%d", &mp4);

	// Term Test
	printf("\n[ENTER Tert Term score]\n");
	printf("Test Term Score: ");
	scanf("%d", &term_test);

	/* PROCESS */

	if (quiz1 == 0)
		count_missing++;
	if (quiz2 == 0)
		count_missing++;
	if (quiz3 == 0)
		count_missing++;
	if (unit1 == 0)
		count_missing++;
	if (unit2 == 0)
		count_missing++;
	if (unit3 == 0)
		count_missing++;
	if (mp1 == 0)
		count_missing++;
	if (mp2 == 0)
		count_missing++;
	if (mp3 == 0)
		count_missing++;
	if (mp4 == 0)
		count_missing++;
	if (term_test == 0)
		count_missing++;

	gquiz = ((quiz1 + quiz2 + quiz3) / 3.0);
	gunit = ((unit1 + unit2 + unit3) / 3.0);
	gmp = ((mp1 + mp2 + mp3 + mp4) / 4.0);
	gterm_test = term_test;

	weightedGrade = (int)(((gquiz * 0.2) + (gunit * 0.25) + (gmp * 0.35) + (gterm_test * 0.20)));
	switch (weightedGrade)
	{
	case 98 ... 100:
		fgrade = 1.00;
		break;
	case 91 ... 97:
		fgrade = 1.25;
		break;
	case 85 ... 90:
		fgrade = 1.50;
		break;
	case 79 ... 84:
		fgrade = 1.75;
		break;
	case 73 ... 78:
		fgrade = 2.00;
		break;
	case 67 ... 72:
		fgrade = 2.25;
		break;
	case 61 ... 66:
		fgrade = 2.50;
		break;
	case 55 ... 60:
		fgrade = 2.75;
		break;
	case 50 ... 54:
		fgrade = 3.00;
		break;
	default:
		fgrade = 5.00;
		break;
	}
	if (count_missing == 3)
	{
		grade = "INC";
		remark = "Incomplete";
	}
	else if (count_missing >= 4)
	{
		grade = "DRP";
		remark = "Dropped";
	}
	else if (weightedGrade < 50)
	{
		remark = "Failed";
	}
	else
	{
		remark = "Passed";
	}

	/* OUTPUT */
	printf("\n[SCORES]\n");
	printf("Quiz 1: %d\n", quiz1);
	printf("Quiz 2: %d\n", quiz2);
	printf("Quiz 3: %d\n", quiz3);
	printf("Unit Test 1: %d\n", unit1);
	printf("Unit Test 2: %d\n", unit2);
	printf("Unit Test 3: %d\n", unit3);
	printf("Machine Problem 1: %d\n", mp1);
	printf("Machine Problem 2: %d\n", mp2);
	printf("Machine Problem 3: %d\n", mp3);
	printf("Machine Problem 4: %d\n", mp4);
	printf("Term Test: %d\n", term_test);

	printf("\n[Grades]\n");
	printf("Quiz Weighted Grade: %.2f\n", gquiz);
	printf("Unit Test Weighted Grade:  %.2f\n", gunit);
	printf("Machine Problem Weighted Grade: %.2f\n", gmp);
	printf("Term Test Weighted Grade:  %.2f\n", gterm_test);

	printf("\n[Final Grade]\n");
	printf("Weighted Grade: %d\n", weightedGrade);
	printf("Final Grade: %.2f\n", fgrade);
	printf("Remarks: %s\n", remark);
	printf("Grade: %.2f\n", grade);

ask:
	printf("\nDo you want to continue? (y/n) ");
	char ans = tolower(getch());
	if (ans == 'y')
	{
		system("cls");
		goto ask_score;
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
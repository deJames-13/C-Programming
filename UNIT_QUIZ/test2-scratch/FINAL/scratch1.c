#include <stdio.h>
#include <windows.h>
#include <conio.h>

main()
{
	// Initialization
	int ddrpctr=0, iincctr=0, pssctr=0, fldctr=0;
	char res;
	int drpctr=0, incctr=0;
	
	sv:
	system("CLS");
	int wgg=0;
	double qa=0, qb=0, qc=0, uta=0, utb=0, utc=0, mpa=0, mpb=0, mpc=0, mpd=0, trm=0,
	wg1=0, wg2=0, wg3=0, wg4=0, wgs=0, wggg=0;

	printf("\nStudent Grade Program \n\n");
	// Input
	
	printf("Enter Student's Quiz 1 Test Score : \n");
	scanf("%lf",&qa);
	printf("Enter Student's Quiz 2 Test Score : \n");
	scanf("%lf",&qb);
	printf("Enter Student's Quiz 3 Test Score : \n");
	scanf("%lf",&qc);
	printf("Enter Student's Unit Test 1 Score: \n");
	scanf("%lf",&uta);
	printf("Enter Student's Unit Test 2 Score : \n");
	scanf("%lf",&utb);
	printf("Enter Student's Unit Test 3 Score : \n");
	scanf("%lf",&utc);
	printf("Enter Student's Macine Problem 1 Test Score : \n");
	scanf("%lf",&mpa);
	printf("Enter Student's Macine Problem 2 Test Score : \n");
	scanf("%lf",&mpb);
	printf("Enter Student's Macine Problem 3 Test Score : \n");
	scanf("%lf",&mpc);
	printf("Enter Student's Macine Problem 4 Test Score : \n");
	scanf("%lf",&mpd);
	printf("Enter Student's Term Exam's Score : \n");
	scanf("%lf",&trm);
	
	// Process
	if(qa<0 || qa>100 || qb<0 || qb>100 || qc<0 || qc>100 || uta<0 || uta>100 || utb<0 || utb>100 || utc<0 || utc>100 || mpa<0 || mpa>100 || mpb<0 || mpb>100  || mpc<0 || mpc>100 || mpd<0 || mpd>100 || trm<0 || trm>100)
	{
		printf("\nError Invalid Input Detected!");
		exit(0);
	}
	if(qa==0){drpctr++, incctr++;}
	if(qb==0){drpctr++, incctr++;}
	if(qc==0){drpctr++, incctr++;}
	if(uta==0){drpctr++, incctr++;}
	if(utb==0){drpctr++, incctr++;}
	if(utc==0){drpctr++, incctr++;}
	if(mpa==0){drpctr++, incctr++;}
	if(mpb==0){drpctr++, incctr++;}
	if(mpc==0){drpctr++, incctr++;}
	if(trm==0){drpctr++, incctr++;}

	wg1 = (((qa+qb+qc)/300)*0.20)*100;
	wg2 = (((uta+utb+utc)/300)*0.25)*100;
	wg3 = (((mpa+mpb+mpc+mpd)/400)*0.35)*100;
	wg4 = ((trm/100)*0.20)*100;
	wgs = (wg1+wg2+wg3+wg4);
	wgg = (int)wgs;
	
	if(incctr == 3){
	iincctr++;
	goto sv2;
	} else if(drpctr >= 4){
	ddrpctr++;
	goto sv2;
	} else 
	{
		switch(wgg)
		{
		case 1 ... 49:
			wggg = 5.00, fldctr++;
			break;
		case 50 ... 54:
			wggg = 3.00, pssctr++;
			break;
		case 55 ... 60:
			wggg = 2.75, pssctr++;
			break;
		case 61 ... 66:
			wggg = 2.50, pssctr++;
			break;
		case 67 ... 72:
			wggg = 2.25, pssctr++;
			break;
		case 73 ... 78:
			wggg = 2.00, pssctr++;
			break;
		case 79 ... 84:
			wggg = 1.75, pssctr++;
			break;
		case 85 ... 90:
			wggg = 1.50, pssctr++;
			break;	
		case 91 ... 97:
			wggg = 1.25, pssctr++;
			break;	
		case 98 ... 100:
			wggg = 1.0, pssctr++;
			break;
		}
	}

	// Output
	sv2:
	system("CLS");
	printf("\n");
	printf("No. of Students who Passed: %d \n",pssctr);
	printf("No. of Students who Failed: %d \n",fldctr);
	printf("No. of Students who are Incomplete: %d \n",iincctr);
	printf("No. of Students who are Dropped: %d \n\n",ddrpctr);
	
	printf("Student's Quizzes Score: %0.2lf, \t%0.2lf, \t%0.2lf \n",qa, qb, qc);
	printf("Student's Unit Tests Score: %0.2lf, \t%0.2lf, \t%0.2lf \n",uta ,utb, utc);
	printf("Student's Machine Problems Score: %0.2lf, \t%0.2lf, \t%0.2lf, \t%0.2lf \n", mpa, mpb, mpc, mpd);
	printf("Student's Term Exam Score: %0.2lf \n\n", trm);
	
	printf("Student's Quiz 1 Weighted Score: %0.2lf\n",qa/100);
	printf("Student's Quiz 2 Weighted Score: %0.2lf\n",qb/100);
	printf("Student's Quiz 3 Weighted Score: %0.2lf\n",qc/100);
	printf("Student's Unit Test 1 Weighted Score: %0.2lf\n",uta/100);
	printf("Student's Unit Test 2 Weighted Score: %0.2lf\n",utb/100);
	printf("Student's Unit Test 3 Weighted Score: %0.2lf\n",utc/100);
	printf("Student's Machine Problem Weighted Score: %0.2lf\n",mpa/100);
	printf("Student's Machine Problem 2 Weighted Score: %0.2lf\n",mpb/100);
	printf("Student's Machine Problem 3 Weighted Score: %0.2lf\n",mpc/100);
	printf("Student's Machine Problem 4 Weighted Score: %0.2lf\n\n",mpd/100);
	
	printf("Student's Quiz Weighted Grade: %0.2lf\n",wg1);
	printf("Student's Unit Test Weighted Grade: %0.2lf\n",wg2);
	printf("Student's Machine Problem Weighted Grade: %0.2lf\n",wg3);
	printf("Student's Term Exam Weighted Grade: %0.2lf\n\n",wg4);
	
	printf("Student's Final Grade: %0.2lf\n\n",wggg);
	
	sv1:
	printf("Do you want to Input more Student Data ? Y/N ");
	res = tolower(getch());
	if(res == 'y'){
		goto sv;
	}else if(res != 'n'){
		goto sv1;
	}

}
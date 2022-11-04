#include <stdio.h>
#include <windows.h>
#include <conio.h>

void main(){
	int examType = 0;
	int totalItems = 100;
	int cQuiz = 0, cUnit_test = 0, cM_problem=0, cTerm_exam=0;
	float aQuiz=0, aUnit_test=0, aM_problem=0, aTerm_exam=0;
	float get_score; 

ask_score:
	get_score = 0;
	printf("Enter exam type: ");
	scanf("%d", &examType);
	
	// Switch for INPUT
	switch(examType){
		case 1:
			printf("Enter score for quiz: ");
			scanf("%d", &get_score);
			break;
		case 2:
			printf("Enter score for unit test: ");
			scanf("%d", &get_score);
			break;
		case 3:
			printf("Enter score for machine problem: ");
			scanf("%d", &get_score);
			break;
		case 4:
			printf("Enter score for term exam: ");
			scanf("%d", &get_score);
			break;
	}
	
	// Switch for PROCESS
	switch(examType){
		case 1:
			printf("Enter score for quiz: ");
			scanf("%d", &get_score);
			break;
		case 2:
			printf("Enter score for unit test: ");
			scanf("%d", &get_score);
			break;
		case 3:
			printf("Enter score for machine problem: ");
			scanf("%d", &get_score);
			break;
		case 4:
			printf("Enter score for term exam: ");
			scanf("%d", &get_score);
			break;
	}
	
	
	
}
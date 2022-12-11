#include <iostream>
#include <iomanip>
using namespace std;

const int COL = 5;

void Start();
void InputAnswers(char answers[][COL], int &n);
void ProcessAnswers(char answers[][COL], char answerKey[COL], int scores[], int n);
void Output(char answers[][COL], int scores[], int n);

int main()
{
	Start();
	return 0;
}

void Start()
{
	char answerKey[COL] = {'T', 'T', 'F', 'F', 'T'};
	char studentAnswers[999][COL] = {{0}};
	int scores[999] = {0};
	int numberOfTest = 0;

	InputAnswers(studentAnswers, numberOfTest);
	ProcessAnswers(studentAnswers, answerKey, scores, numberOfTest);
	Output(studentAnswers, scores, numberOfTest);
}
void InputAnswers(char answers[][COL], int &n)
{
	char input = 0;
	cout << "Enter the number of test: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter answers for Test #" << i + 1 << endl;
		for (int j = 0; j < COL; j++)
		{
			cout << "Number " << j + 1 << ": ";
			cin >> input;
			input = toupper(input);

			if (!(input == 'T' || input == 'F'))
			{
				cout << "\nEnter a valid answer (T or F).\n";
				j--;
				continue;
			}
			answers[i][j] = input;
			input = 0;
		}
	}
}
void ProcessAnswers(char answers[][COL], char answerKey[COL], int scores[], int n)
{
	int scoreSum = 0;
	int points = 5;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (answerKey[j] == answers[i][j])
			{
				scoreSum += points;
			}
		}
		scores[i] = scoreSum;
		scoreSum = 0;
	}
}
void Output(char answers[][COL], int scores[], int n)
{
	cout << "\nOUTPUT\n";
	for (int i = 0; i < n; i++)
	{
		cout << setw(10) << "Test #" << i + 1;
		for (int j = 0; j < COL; j++)
		{
			cout << setw(10) << answers[i][j];
		}
		cout << setw(10) << scores[i] << endl;
	}
}
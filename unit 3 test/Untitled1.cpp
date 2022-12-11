#include <iostream>
#include <iomanip>
using namespace std;

#define COL 5

void runProgram();
void getInput(char arr[][COL], int &n);
void processAnswers(char arr[][COL], char ans[COL], int scores[], int n);
void display(char arr[][COL], int scores[], int n);

int main()
{
    runProgram();
    return 0;
}

void runProgram()
{
    char correctAns[COL] = {'T', 'T', 'F', 'F', 'T'};
    char answers[999][COL] = {{0}};
    int scores[] = {0};
    int numberOfTest = 0;

    getInput(answers, numberOfTest);
    processAnswers(answers, correctAns, scores, numberOfTest);
    display(answers, scores, numberOfTest);
}
void getInput(char arr[][COL], int &n)
{
    char input = 0;
    cout << "Enter the number of test: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter answers for Test #" << i + 1 << endl;
        for (int j = 0; j < COL; j++)
        {
            cout << "Answer " << j + 1 << ": ";
            cin >> input;
            input = toupper(input);
            cout << "input: " << input << "\n";

            if (!(input == 'T' || input == 'F'))
            {
                cout << "\nEnter a valid answer (T or F).\n";
                j--;
                continue;
            }
            arr[i][j] = input;
            input = 0;
        }
    }
}

void processAnswers(char arr[][COL], char ans[COL], int scores[], int n)
{
    int scoreSum;
    int points = 5;
    for (int i = 0; i < n; i++)
    {
        scoreSum = 0;
        for (int j = 0; j < COL; j++)
        {
            if (ans[j] == arr[i][j])
            {
                scoreSum += points;
            }
        }
        scores[i] = scoreSum;
        scoreSum = 0;
    }
}

void display(char arr[][COL], int scores[], int n)
{
    cout << "\nOUTPUT\n";
    for (int i = 0; i < n; i++)
    {
        cout << setw(10) << "Test #" << i + 1;
        for (int j = 0; j < COL; j++)
        {
            cout << setw(10) << arr[i][j];
        }
        cout << setw(10) << scores[i] << endl;
    }
}
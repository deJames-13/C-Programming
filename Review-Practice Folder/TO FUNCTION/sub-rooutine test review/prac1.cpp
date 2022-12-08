#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#define ROW 5
#define COL 7

void runProgram();
void getInput(int arr[][COL]);
void Process(int arr[][COL]);
float get_gweight(int n);
void display(int arr[][COL]);

int main()
{
    runProgram();
    return 0;
}

void runProgram()
{
    int gradeTable[ROW][COL];
    getInput(gradeTable);
    Process(gradeTable);
    display(gradeTable);
}

void getInput(int arr[][COL])
{
    for (int i = 0; i < ROW; i++)
    {
        arr[i][0] = i + 1;
        cout << "Enter the grades for Student #" << arr[i][0] << endl;
        for (int j = 1; j < COL - 2; j++)
        {
            cout << "Grade #" << j << ": ";
            cin >> arr[i][j];
        }
    }
}

void display(int arr[][COL])
{
    string colTitle[COL] = {
        "Student No.",
        "Grade #1",
        "Grade #2",
        "Grade #3",
        "Grade #4",
        "Average #1",
        "Average #2",
    };
    cout << "\nOUTPUT\n";
    for (int i = 0; i < COL; i++)
    {
        cout << setw(colTitle[i].length() + 5) << colTitle[i];
    }
    cout << "\n";
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << setw(colTitle[j].length() + 5) << arr[i][j];
        }
        cout << "\n";
    }
}

float get_gweight(int n)
{
    float w = 0;
    switch (n)
    {
    case 1:
        w = 0.2;
        break;
    case 2:
        w = 0.3;
        break;
    case 3:
        w = 0.3;
        break;
    case 4:
        w = 0.2;
        break;

    default:
        break;
    }
    return w;
}

void Process(int arr[][COL])
{
    int ave1 = 0, ave2 = 0;
    for (int i = 0; i < ROW; i++)
    {
        ave1 = 0;
        ave2 = 0;
        for (int j = 1; j < COL - 2; j++)
        {
            ave1 += arr[i][j];
            ave2 += arr[i][j] * get_gweight(j);
        }
        arr[i][5] = ave1 / 4;
        arr[i][6] = ave2;
    }
}

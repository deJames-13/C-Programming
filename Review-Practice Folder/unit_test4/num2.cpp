#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_SIZED = 100;
const int COL = 2;

void runProgram();
void getInput(int arr[][COL], int &n);
void bubbleSort(int arr[][COL], int n);
void display(int arr[][COL], int n);

int main()
{
    runProgram();
    return 0;
}

void runProgram()
{
    int table[MAX_SIZED][COL] = {0};
    int numberOfTracks = 0;
    getInput(table, numberOfTracks);
    bubbleSort(table, numberOfTracks);
    display(table, numberOfTracks);
}
void getInput(int arr[][COL], int &n)
{
    cout << "Enter the number of parts to track: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "\nValue #" << i + 1 << endl;

        for (int j = 0; j < COL; j++)
        {
            if (j == 0)
                cout << "Enter parts: ";
            else
                cout << "Enter quantity: ";
            cin >> arr[i][j];
        }
    }
}
void bubbleSort(int arr[][COL], int n)
{
    int temp1 = 0, temp2 = 0;
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i][0] < arr[i + 1][0])
            {
                temp1 = arr[i + 1][0];
                temp2 = arr[i + 1][1];
                arr[i + 1][0] = arr[i][0];
                arr[i + 1][1] = arr[i][1];
                arr[i][0] = temp1;
                arr[i][1] = temp2;
            }
        }
    }
}
void display(int arr[][COL], int n)
{
    cout << "\nOUTPUT\n";
    cout << setw(10) << "Value" << setw(10) << "Quantity\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << setw(10) << arr[i][j];
        }
        cout << "\n";
    }
}
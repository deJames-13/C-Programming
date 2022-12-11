#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE_LIMIT = 100;
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
    int table[SIZE_LIMIT][COL] = {0};
    int numberOfTracks = 0;
    getInput(table, numberOfTracks);
    bubbleSort(table, numberOfTracks);
    display(table, numberOfTracks);
}
void getInput(int arr[][COL], int &n)
{
    cout << "Enter the number of parts to track: ";
    cin >> n;
    if (n > 100)
    {
        cout << "Max size for tracks in only 100.\nSetting size to 100.\n";
        n = 100;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\nTrack #" << i + 1 << endl;

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
    int temps[COL];
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {

            if (arr[i][0] < arr[i + 1][0])
            {
                for (int j = 0; j < COL; j++)
                {
                    temps[j] = arr[i + 1][j];
                    arr[i + 1][j] = arr[i][j];
                    arr[i][j] = temps[j];
                }
            }
        }
    }
}
void display(int arr[][COL], int n)
{
    cout << "\nOUTPUT\n";
    cout << setw(10) << "Parts" << setw(12) << "Quantity\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << setw(10) << arr[i][j];
        }
        cout << "\n";
    }
}
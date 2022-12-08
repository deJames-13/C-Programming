#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void runProgram();
int getInput(int arr[]);
int process(int arr[], int counts[]);
void display(int counts[]);

int main()
{
    runProgram();
    return 0;
}

void runProgram()
{
    int counts[4] = {};
    int arr[20] = {0};
    getInput(arr);
    process(arr, counts);
    display(counts);
}
int getInput(int arr[])
{
    int input = 0;
    int len = 0;
    for (int i = 0; i < 20; i++)
    {
        if (arr[i])
        {
            len++;
            continue;
        }
        break;
    }
    cout << "Enter a valid number for arr[" << len << "]: ";
    cin >> input;
    if (len + 1 == 20)
    {
        cout << "Array size limit reached.\n";
    }
    else if (input > 0)
    {
        if (!(input <= 4))
        {
            cout << "Invalid input.\nPlease enter input from 1-4\n";
            return getInput(arr);
        }
        arr[len] = input;
        return getInput(arr);
    }
    cout << "Data entry stopped.\nNumber of inputted values: " << len << "\n\nCounting same inputs...\n\n";
    return 0;
}

int process(int arr[], int counts[])
{
    for (int i = 0; i < 20; i++)
    {
        if (arr[i])
        {
            counts[arr[i] - 1]++;
            continue;
        }
        break;
    }
    return 0;
}

void display(int counts[])
{
    string cat[4] = {"Infant", "Child", "Teenager", "Adult"};
    for (int i = 0; i < 4; i++)
    {
        cout << cat[i] << ": " << counts[i] << "\n";
    }
}

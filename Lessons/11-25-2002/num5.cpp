#include <iostream>
using namespace std;

// Add defines

int getInput(int &y);
int getResult(int x, int y, int &remainder);
int runProgram(int &x, int &y, int &quo, int &remainder);

int main()
{
    int x = 0, y = 0, quo = 0, remainder = 0;
    runProgram(x, y, quo, remainder);

    return 0;
}
// INPUT FUNCTION
int getInput(int &y)
{
    int x = 0;
    cout << "Enter the value for X: ";
    cin >> x;
    cout << "Enter the value for Y: ";
    cin >> y;
    return x;
}
// PROCESS FUNCTION
int getResult(int x, int y, int &remainder)
{
    int quo = 0;
    quo = x / y;
    remainder = x % y;
    return quo;
}
// OUTPUT
int runProgram(int &x, int &y, int &quo, int &remainder)
{
    x = getInput(y);
    quo = getResult(x, y, remainder);

    cout << "The value of X is " << x << endl
         << "The value of Y is " << y << endl
         << "The quotient is " << quo << endl
         << "The remainder is " << remainder << endl;

    return 0;
}

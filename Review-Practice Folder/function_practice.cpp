// QUIZ 1, number 1
#include <iostream>
#include <string>
using namespace std;

float getFloat(string prompt);
void runProgram();

int main()
{
    runProgram();
    return 0;
}

float getFloat(string prompt)
{
    float f;
    cout << prompt;
    cin >> f;
    return f;
}

void runProgram()
{
    float feet, inches;
    // INPUT
    feet = getFloat("Enter the value for feet: ");
    inches = getFloat("Enter the value for inches: ");

    // PROCESS
}
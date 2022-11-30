#include <iostream>
#include <math.h>
using namespace std;

// DECLARATION
int getInput(); // haba()
int areaS(int num1);
int areaSWithNoParams();

// MAIN FUNCTION
int main()
{
    // Example
    // input the length of the square and calculate the area
    int length = 0, area = 0;

    // INPUT
    length = getInput(); // Calls the getInput to get the length of the square
    // PROCESS
    // area = areaS(length); calls a function that returns the area
    // area = areaSWithNoParams(); // calls the function with no params to do the process

    // OUTPUT
    cout << "The area is: " << area << endl;

    return 0;
}

// FUNCTIONS
int getInput()
{
    int l;
    // code to get the input
    cout << "Enter the length: ";
    cin >> l;
    return l; // returns the inputted value
}

int areaS(int num1)
{
    // int area;
    // area = num1 * num1;
    return num1 * num1;
}

int areaSWithNoParams()
{
    int side = 0, areaSq = 0;
    side = getInput();
    cout << "The length is: " << side << endl;
    areaSq = side * side;

    return areaSq;
}

#include <iostream>
#include <cmath> // for the sqrt and pow functions
using namespace std;

// Function prototype
double rightTriangle(double a, double b);

int main()
{
    // Test the rightTriangle function
    cout << "The hypotenuse of a triangle with sides 3 and 4 is: "
         << rightTriangle(3, 4) << endl;
    cout << "The hypotenuse of a triangle with sides 5 and 12 is: "
         << rightTriangle(5, 12) << endl;
    cout << "The hypotenuse of a triangle with sides 8 and 15 is: "
         << rightTriangle(8, 15) << endl;
    return 0;
}

// Function definition
double rightTriangle(double a, double b)
{
    return sqrt(pow(a, 2) + pow(b, 2));
}
// basic for loop code
#include <iostream>
using namespace std;

int main()
{
    cout << "FOR-LOOPS" << endl;
    int range = 10;

    /*
    FOR LOOP FORMAT/SYNTAX

    for (initialization; condition; increment (adding 1))
    {
        // Code Here
    }

    */

    for (int i = 0; i < range; i++)
    // "int i = 0;"
    // - create an integer named i that has a value of 0.
    // - the assigned value becomes the starting point

    // "i < range;"
    // - checks if "i" is less than the range, if true, then the loop will continue to run

    // "i++;"
    // - adds 1 to i until it reaches the value of range and break the condition "i < range"
    {
        cout << "Value of i: " << i << "\n";
    }

    cout << "\nCOUNT DOWN\n\n";
    for (int n = 10; n > 0; --n)
    {
        cout << n << "... ";
    }
    cout << endl;
    cout << "bOOM!\n";

    return 0;
}
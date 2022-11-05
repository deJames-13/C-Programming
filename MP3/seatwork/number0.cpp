#include <iostream>
using namespace std;

int main()
{
    int count = 0, i = 1;
    float num = 0, sum = 0, ave = 0;

    // INPUT
    cout << "Enter the number of integer input: ";
    cin >> count; // kukunin kung ilang input ng number kelangan

    // PROCESS
    while (i <= count) // condition para malimit ung input base sa kung ilan lang yung nilagay ng user
    {
        cout << "Enter the integer " << i << ": ";
        cin >> num;

        sum = sum + num; // accumulator para sa number na ini-input
        i++;             // add ng 1 sa i para mareach ung value ng count
    }
    ave = sum / count; // average, sum (yung pinakatotal) / count (kung ilang number)
    // OUTPUT
    cout << "Ave is: " << ave << "\n";

    return 0;
}
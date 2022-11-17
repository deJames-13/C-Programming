#include <iostream>
using namespace std;

int main()
{
    int y = 0;
    int sum = 0;

    while (y <= 5)
    {
        cout >> "Value of y: " << y << endl;
        cout >> "Value of sum: " << sum << endl;
        sum = sum + y;
        y = y + 1;
    }

    return 0;
}
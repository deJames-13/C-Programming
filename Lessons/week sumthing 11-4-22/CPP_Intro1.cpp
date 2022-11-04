#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Enter the starting number: " << endl;
    while (n > 0)
    {
        cout << n << ", " << --n << endl;
    }
    return 0;
}
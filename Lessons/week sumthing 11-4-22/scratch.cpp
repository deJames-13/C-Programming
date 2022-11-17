#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int sum = 0;
    while (num <= 5)
    {
        cout << "Value of num: " << num << endl;
        sum = sum + num; // accumulator = 0 + 1 + 2 + 3 + 4 + 5 = 15
        cout << "Value of sum: " << sum << endl;
        num = num + 1; // 0 + 1 = 1 + 1 = 2 + 1 = 3 + 1 = 4 + 1 = 5
    }

    return 0;
}
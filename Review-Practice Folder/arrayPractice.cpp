#include <iostream>
using namespace std;

int main()
{
    int values[30];
    for (int i = 0; i < 30; i++)
    {
        values[i] = i + 1;
        cout << values[i] << "\n";
    }

    return 0;
}
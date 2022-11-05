#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int days = 64;
    double cent = 0.01;

    cout << "Day" << setw(10) << "Amount Owed\n";
    for (int i = 1; i <= 64; i++)
    {
        cout << setw(3) << i << setw(25) << cent << "\n";
        cent = cent * 2;
    }

    return 0;
}
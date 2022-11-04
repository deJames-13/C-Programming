#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int days = 64;
    float cent = 0.01;

    // cout << setprecision(3);
    cout << "Day" << setw(15) << "Amount Owed\n";
    for (int i = 1; i <= 64; i++)
    {
        cout << setw(2) << setfill('0') << i << setw(15) << setfill(' ') << cent << "\n";
        cent *= 2;
    }

    return 0;
}
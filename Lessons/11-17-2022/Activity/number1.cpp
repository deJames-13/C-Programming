#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int array1[4][4];
    int row, col, sumR, sumC, total;

    cout << "Enter data for the array: \n";
    // INPUT
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            cout << "Row " << row << " Col " << col << ": ";
            cin >> array1[row][col];
        }
    }

    // PROCESS
    for (row = 0; row < 3; row++)
    {
        sumR = 0;
        sumC = 0;
        for (col = 0; col < 3; col++)
        {
            sumR += array1[row][col];
            sumC += array1[col][row];
        }
        array1[3][row] = sumC;
        array1[row][3] = sumR;

        total += sumC + sumR;
        array1[3][3] = total;
    }

    // OUTPUT
    cout << "\nARRAY TABLE\n";
    for (row = 0; row < 4; row++)
    {
        sumC = 0;
        for (col = 0; col < 4; col++)
        {
            cout << setw(12) << array1[row][col];
        }
        cout << "\n";
    }
    return 0;
}
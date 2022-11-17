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
            /*
            row, col - horizontal (mapping)
            col, row - veretical (mapping)

            */
            sumR = sumR + array1[row][col]; // accumulates values from each row horizontally
            /*
                0 1 2
                0 1 2
                0 1 2
            */
            sumC = sumC + array1[col][row]; // accumulates values from each column vertically
            /*
                0 0 0
                1 1 1
                2 2 2
            */
        }
        array1[3][row] = sumC; // inserts the sum of each columns (sumC) to the last row (array[3])
        /*
            0 0 0
            1 1 1
            2 2 2
            3 3 3
        */
        array1[row][3] = sumR; // inserts the sum of each rows (sumC) to the last column (array[row][3])
        /*
           0 1 2 3
           0 1 2 3
           0 1 2 3
        */
    }
    // accumulating total from last column
    for (col = 0; col < 3; col++)
    {
        total = total + array1[3][col]; // 3 + 3 + 3 = 9
    }
    // accumulating total from last row
    for (row = 0; row < 3; row++)
    {
        total = total + array1[row][3]; // 9 + 3 + 3 + 3 = 18
    }
    array1[3][3] = total;

    /*
        1 1 1 3
        1 1 1 3
        1 1 1 3
        3 3 3 18
    */

    // OUTPUT
    for (row = 0; row < 4; row++)
    {
        sumC = 0;
        for (col = 0; col < 4; col++)
        {
            cout << array1[row][col] << setw(10);
        }
        cout << "\n";
    }
    return 0;
}
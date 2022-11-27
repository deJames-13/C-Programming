#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int row, col;

    int array1[3][4];
    int min = 0, min_x = 0, min_y = 0;
    int max = 0, max_x = 0, max_y = 0;

    // INPUT
    cout << "Enter values for the array: \n";
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 4; col++)
        {
            cout << "Row " << row << " Col " << col << ": ";
            cin >> array1[row][col];
        }
    }
    // PROCESS
    max = array1[0][0];
    min = array1[0][0];
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 4; col++)
        {
            if (array1[row][col] > max)
            {
                max = array1[row][col];
                max_x = row;
                max_y = col;
            }
            if (array1[row][col] < min)
            {
                min = array1[row][col];
                min_x = row;
                min_y = col;
            }
        }
    }
    // OUTPUT
    cout << "\nARRAY VALUES: \n";
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 4; col++)
        {
            cout << setw(15) << array1[row][col];
        }
        cout << "\n";
    }
    cout << "\nThe maximum value is: " << max << endl
         << setw(22) << "Coordinates: "
         << "(" << max_x << ", " << max_y << ")" << endl
         << "\nThe minimum value is: " << min << endl
         << setw(22) << "Coordinates: "
         << "(" << min_x << ", " << min_y << ")" << endl;
    return 0;
}

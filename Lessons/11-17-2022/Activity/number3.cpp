#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int row = 0, col = 0;

    int grades[3][5];
    int counters[5] = {};
    int sums[5] = {};
    float aves[5] = {};
    string display[] = {
        "Number of grade < 60: ",
        "Number of grade >= 60 and < 70: ",
        "Number of grade >= 70 and < 80: ",
        "Number of grade >= 80 and < 90: ",
        "Number of grade >= 90: ",
    };

    // INPUT
    cout << "Enter the values for grades: \n";
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 5; col++)
        {
            cin >> grades[row][col];
        }
    }
    // PROCESS
    cout << "PROCESS\n";

    for (col = 0; col < 5; col++)
    {
        for (row = 0; row < 3; row++)
        {

            if (grades[row][col] < 60)
            {
                sums[0] = sums[0] + grades[row][col];
                counters[0] = counters[0] + 1;
            }
            else if (grades[row][col] >= 60 && grades[row][col] < 70)
            {
                sums[1] = sums[1] + grades[row][col];
                counters[1] = counters[1] + 1;
            }
            else if (grades[row][col] >= 70 && grades[row][col] < 80)
            {
                sums[2] = sums[2] + grades[row][col];
                counters[2] = counters[2] + 1;
            }
            else if (grades[row][col] >= 80 && grades[row][col] < 90)
            {
                sums[3] = sums[3] + grades[row][col];
                counters[3] = counters[3] + 1;
            }
            else if (grades[row][col] >= 90)
            {
                sums[4] = sums[4] + grades[row][col];
                counters[4] = counters[4] + 1;
            }
        }
    }
    for (col = 0; col < 5; col++)
    {
        if (counters[col])
        {
            aves[col] = (float)sums[col] / counters[col];
        }
    }

    // OUTPUT
    cout << setprecision(3);
    cout << "OUTPUT\n";
    cout << "\nArray Table: " << endl;
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 5; col++)
        {
            cout << setw(5) << grades[row][col];
        }
        cout << "\n";
    }
    cout << setw(42) << "Count" << setw(10) << "Average" << endl;
    for (col = 0; col < 5; col++)
    {
        cout << setw(32) << display[col] << setw(10) << counters[col] << setw(10) << aves[col] << endl;
    }

    return 0;
}

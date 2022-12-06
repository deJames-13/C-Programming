#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#define ROW 5
#define COL 7

int main()
{
    int gradeTable[ROW][COL];
    string colTitle[] = {"Student", "Grade 1", "Grade 2", "Grade 3", "Grade 4", "Average 1", "Average 2"};
    int row, col;
    int firstAve = 0, secondAve = 0;
    float gradeWeight = 0;
    // INPUT
    for (int row = 0; row < ROW; row++)
    {
        cout << "Enter Values for Student #" << row + 1 << endl;
        gradeTable[row][0] = row + 1;
        for (col = 1; col < COL - 2; col++)
        {
            cout << "Grade " << col << ": ";
            cin >> gradeTable[row][col];
        }
    }

    // PROCESS
    for (int row = 0; row < ROW; row++)
    {
        firstAve = 0;
        secondAve = 0;
        for (col = 1; col < COL - 2; col++)
        {
            firstAve += gradeTable[row][col];
            switch (col)
            {
            case 1:
                gradeWeight = 0.2;
                break;
            case 2:
                gradeWeight = 0.3;
                break;
            case 3:
                gradeWeight = 0.3;
                break;
            case 4:
                gradeWeight = 0.2;
                break;
            }
            secondAve += (gradeWeight * gradeTable[row][col]);
        }
        gradeTable[row][5] = firstAve / 4;
        gradeTable[row][6] = secondAve;
    }

    // OUTPUT
    for (col = 0; col < COL; col++)
    {
        cout << setw(colTitle[col].length() + 5) << colTitle[col];
    }
    cout << endl;
    for (row = 0; row < ROW; row++)
    {
        for (col = 0; col < COL; col++)
        {
            cout << setw(colTitle[col].length() + 5) << gradeTable[row][col];
        }
        cout << "\n";
    }

    return 0;
}
#include <iostream>
#include <stdio.h>
using namespace std;

// define format
// - #define (NAME) (ung papalitan)

// MAG ASSIGN
// GLOBAL / DEFINED VALUES
// - di nababago (constant)
#define ROW 3
#define COL 3

// PAPALITAN UNG FUNCTION
#define pasok cin
#define labas cout
#define ggwp >>
#define ggez <<
#define endline endl

int main()
{
    // ROW = 10; BAWAL I RE ASSIGN ANG DEFINED VALUE
    int num[ROW][COL];
    int r, c, sum = 0;

    labas ggez "Input data: " ggez endl;
    for (r = 0; r <= 2; r++) // COUNTER FOR ROW
    {
        for (c = 0; c <= 2; c++) // COUNTER FOR COLUMN
        {
            pasok ggwp num[r][c]; // array[ROW][COLUMN]
        }
    }

    for (r = 0; r <= 2; r++)
    {
        for (c = 0; c <= 2; c++)
        {
            sum = sum + num[r][c];
        }
    }
    cout << "Sum: " << sum << endl;

    cout << "Array data: ";
    for (r = 0; r <= 2; r++)
    {
        for (c = 0; c <= 2; c++)
        {
            cout << num[r][c] << " ";
        }
    }
    cout << "\n";

    return 0;
}
#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;
int main()

{
    int num[4][4] = {
        {45, 89, 54},
        {36, 100, 2},
        {90, 3, 230},
    };
    int r, c, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;

    for (r = 0; r <= 2; r++)
    {
        sum1 = 0;
        for (c = 0; c <= 2; c++)
        {
            sum1 = sum1 + num[r][c];
            num[r][3] = sum1;
        }
    }

    for (r = 0; r <= 2; r++)
    {
        sum2 = 0;
        for (c = 0; c <= 2; c++)
        {
            // sum2 = num[0][1] + num[1][1] + num[2][1];
            sum2 = sum2 + num[c][r];
            num[3][r] = sum2;
        }
    }

    for (r = 0; r <= 3; r++)
    {
        for (c = 0; c <= 3; c++)
        {
            cout << setw(5) << num[r][c];
        }
        cout << endl;
    }
    return 0;
}
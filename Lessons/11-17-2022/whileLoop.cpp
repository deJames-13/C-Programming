#include <iostream>
using namespace std;

int main()
{
    int quad[4][4];
    int r = 0, c = 0, sumr, sumc, total;

    // INPUT
    cout << "Enter the data: " << endl;

    while (r < 3)
    {
        c = 0;
        while (c < 3)
        {
            cin >> quad[r][c];
            c++;
        }
        r++;
    }
    // PROCESS
    r = 0;
    c = 0;
    while (r < 3)
    {
        c = 0;
        while (c < 3)
        {
            sumr = sumr + quad[r][c];
            sumc = sumc + quad[c][r];
            quad[3][row] = sumc;

            c++;
        }
        quad[row][3] = sumr;
        r++;
    }

    r = 0;
    c = 0;
    while (r < 3)
    {
        total = quad[r][3];
        r++
    }
    while (c < 3)
    {
        total = quad[3][c];
        c++
    }

    // OUTPUT
    while (r < 4)
    {
        c = 0;
    }

    return 0;
}
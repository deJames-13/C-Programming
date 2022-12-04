#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int yearExpected[10];
    float sales[10];
    float projectedProfit[10];

    double currentSales = 10000000.00;
    double loss = 0.04, profit = 0.10;
    int i;

    // PROCESS
    for (i = 0; i < 10; i++)
    {
        yearExpected[i] = i + 1;
        if (i == 0)
        {
            sales[i] = currentSales;
        }
        else
        {
            sales[i] = sales[i - 1] - (sales[i - 1] * loss);
        }
        projectedProfit[i] = sales[i] * profit;
    }

    // OUTPUT
    cout << fixed << setprecision(2); // wag alisin
    cout << setw(20) << "Year Expected"
         << setw(20) << "Sales"
         << setw(20) << "Projected Profit" << endl;
    for (i = 0; i < 10; i++)
    {
        cout << setw(20) << yearExpected[i] << setw(20) << sales[i] << setw(20) << projectedProfit[i] << endl;
    }

    return 0;
}
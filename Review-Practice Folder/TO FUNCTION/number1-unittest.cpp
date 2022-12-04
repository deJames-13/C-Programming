#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdio.h>
using namespace std;

float hourW();
int payA();
int payB();

int main()
{
    int payAa, payBb;
    float hrw = hourW();
    payAa = payA();
    payBb = payB();

    cout << "Hours work: " << hrw << "\n";
    cout << "Pay A: " << payAa << "\n";
    cout << "Pay B: " << payBb << "\n";
    return 0;
}

float hourW()
{
    float hrw;
    do
    {

        cout << "Enter the hours work: ";
        cin >> hrw;
    } while (hrw < 0 || hrw > 180);
    return hrw;
}

int payA()
{
    int grdA, pgrd;
    cout << "Enter pay grade A: ";
    cin >> grdA;
    switch (grdA)
    {
    case 5500:
        pgrd = 5500;
        break;
    case 6500:
        pgrd = 6500;
        break;
    case 7000:
        pgrd = 7000;
        break;
    case 7500:
        pgrd = 7500;
        break;
    case 10000:
        pgrd = 10000;
        break;
    case 12500:
        pgrd = 12500;
        break;
    }
    return pgrd;
}

int payB()
{
    int grdA, pgrd;
    cout << "Enter pay grade B: ";
    cin >> grdA;
    switch (grdA)
    {
    case 6500:
        pgrd = 6500;
        break;
    case 7000:
        pgrd = 7000;
        break;
    case 7500:
        pgrd = 7500;
        break;
    case 8500:
        pgrd = 8500;
        break;
    case 10500:
        pgrd = 10500;
        break;
    case 13500:
        pgrd = 13500;
        break;
    }
    return pgrd;
}

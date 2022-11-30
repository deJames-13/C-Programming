#include <stdio.h>
#include <iostream>

using namespace std;

int PuntaNum1(int &num2, int &num3, int &num4)
{
    int num1;

    cout << "Enter your first score: " << endl;
    cin >> num1;
    cout << "Enter your second score: " << endl;
    cin >> num2;
    cout << "Enter your third score: " << endl;
    cin >> num3;
    cout << "Enter your fourth score: " << endl;
    cin >> num4;

    return (num1);
}

int calculate(int &num10, int &num2, int &num3, int &num4, float &average)
{
    int totals;

    num10 = PuntaNum1(num2, num3, num4);
    totals = num10 + num2 + num3 + num4;
    average = totals / 4;
    return totals;
}

int eme()
{
    int alltotal = 0, totals = 0, num10 = 0, num2 = 0, num3 = 0, num4 = 0;
    float average = 0.00;

    alltotal = calculate(num10, num2, num3, num4, average);
    cout << "The first score is " << num10 << endl;
    cout << "The second score is " << num2 << endl;
    cout << "The third score is " << num3 << endl;
    cout << "The fourth score is " << num4 << endl;
    cout << "The average is " << average << endl;
}
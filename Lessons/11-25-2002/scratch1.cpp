#include <iostream>
using namespace std;

int ex1(int &num1)
{
    int num2;
    cout << "Enter num1" << endl;
    cin >> num1;
    cout << "Enter num2" << endl;
    cin >> num2;
    return num2;
}

int process(int &num1, int &num22, int &rem)
{
    int divi = 0;
    num22 = ex1(num1);
    divi = num1 / num22;
    rem = num1 % num22;
    return divi;
}
int output()
{
    int p1 = 0, num1 = 0, num22 = 0, divi = 0, rem = 0;
    p1 = process(num1, num22, rem);

    cout << "num1val " << num1 << endl;
    cout << "num2val " << num22 << endl;
    cout << "quotient " << p1 << endl;
    cout << "remiander " << rem << endl;
    return 0;
}
int main()
{
    output();
    return 0;
}
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void getInput(double &a, double &b);
double rigthTriangle(double a, double b);
void display(double a, double b, double c);

int main()
{
    double hypotenuse = 0, a = 0, b = 0;
    getInput(a, b);
    hypotenuse = rigthTriangle(a, b);
    display(a, b, hypotenuse);
    return 0;
}

void getInput(double &a, double &b)
{
    cout << "Enter side a: \n";
    cin >> a;
    cout << "Enter side b: \n";
    cin >> b;
}

double rigthTriangle(double a, double b)
{
    double c = 0;
    c = sqrt(pow(a, 2) + pow(b, 2));
    return c;
}

void display(double a, double b, double c)
{
    cout << fixed << setprecision(2);
    cout << "\nOUTPUT\n";
    cout << "Side a: " << a << endl;
    cout << "Side b: " << b << endl;
    cout << "Hypotenuse c: " << c << endl;
}

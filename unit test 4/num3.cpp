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
    cout << "Enter side a: ";
    cin >> a;
    cout << "Enter side b: ";
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
    cout << fixed << setprecision(2)
    	 << endl << "\nOUTPUT"
    	 << endl << "Side a: " << a
    	 << endl << "Side b: " << b
    	 << endl << "Hypotenuse c: " << c << endl;
}

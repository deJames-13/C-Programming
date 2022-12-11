#include <iostream>
#include <math.h>

using namespace std;

float rightTriangle()
{
    float a;

    cout << "Enter the Length of the side a: ";
    cin >> a;
    return (a);
}

float rightTriangle2()
{
    float b;

    cout << "Enter the Length of the side b: ";
    cin >> b;
    return (b);
}

float hypotenuse(float &rT, float &rT2)
{
    float c = 0;

    rT = rightTriangle();
    rT2 = rightTriangle2();

    c = sqrt(pow(rT, 2) + pow(rT2, 2));
    return (c);
}

float printing()
{
    float hypo;
    float rT, rT2;

    hypo = hypotenuse(rT, rT2);
    cout << "Hypotenuse: " << hypo;
}

int main()
{
    printing();
    return 0;
}
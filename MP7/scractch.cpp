#include <iostream>
#include <stdio.h>
#include <Math.h>
using namespace std;

float feett(float &habainch)
{
    float habaft;
    cout << "Enter the length in Feet ";
    cin >> habaft;
    cout << "Enter the length in inches ";
    cin >> habainch;
    return (habaft);
}
float solving(float ft, float &centimeters, float habainch)
{
    float meters;
    ft = feett(habainch);
    meters = ft * 0.3048;
    centimeters = habainch * 30.48;
    return meters;
}

int main()
{
    float metertotal = 0, ft = 0;
    float centimeters = 0, habainch = 0;
    metertotal = solving(ft, centimeters, habainch);
    cout << "Feet to meters: " << metertotal << endl;
    cout << "Feet to centimeters: " << centimeters;
    return 0;
}
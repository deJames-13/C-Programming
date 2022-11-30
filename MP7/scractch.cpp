#include <stdio.h>
#include <iostream>
#include <Math.h>

using namespace std;

float PutInit()
{
    float fahrenheit;

    cout << "Enter Temperature: ";
    cin >> fahrenheit;
    return (fahrenheit);
}

float Computing(float &hot)
{
    float celcius;

    hot = PutInit();
    celcius = (hot - 32) / 1.800;
    return celcius;
}

int Printing()
{
    float faren, totalcelcius, hot;
    faren = PutInit();
    totalcelcius = Computing(hot);

    cout << "The Farenheit is " << faren << endl;
    cout << "The Temperature in Celcius is " << totalcelcius << endl;
    return 0;
}

main()
{

    Printing();

    return 0;
}
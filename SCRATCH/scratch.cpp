#include <stdio.h>
#include <iostream>

using namespace std;

float Input()
{

    float f;

    cout << "Farenheit to Celsius Calculator!" << endl
         << endl;
    cout << "INPUT THE MEASUREMENTS!" << endl;
    cout << "\nFarenheit: " << endl;
    cin >> f;

    return f;
}

float Process()
{

    float f, c;

    f = Input();

    // c = (f – 32) / 1.800;
    c = (f - 32) / 1.800;

    return c;
}

main()
{

    float celsius;

    celsius = Process();

    cout << "\nCOMPUTATION!";
    cout << "\nCelsius: " << celsius << endl;
}
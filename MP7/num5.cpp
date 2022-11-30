#include <iostream>
#include <iomanip>
#include <windows.h>
#include <conio.h>
using namespace std;

float getCelsius();
float convert(float f);
void getStatus();
void display(float c, float f);
void runProgram();

int main()
{
    runProgram();
    return 0;
}

void runProgram()
{
    float celsius = 0, fahrenheit = 0;
    cout << "\nFahrenheit to Celsius Conversion\n";

    fahrenheit = getCelsius();
    celsius = convert(fahrenheit);
    display(celsius, fahrenheit);
    getStatus();
}

float getCelsius()
{
    float f;
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> f;
    return f;
}
float convert(float f)
{
    float c;
    c = (f - 32) / 1.8;
    return c;
}
void display(float c, float f)
{
    cout << "\nConverted:\n";
    cout << setw(15) << "Fahrenheit" << setw(15) << "Celsius\n"
         << setw(15) << f << setw(15) << c << endl;
}

void getStatus()
{
    char ans;
    cout << "\nDo you want to continue?\n";
    ans = tolower(getch());
    cout << ans << endl;
    if (ans == 'y')
    {
        system("cls");
        runProgram();
    }
    else if (ans == 'n')
    {
        cout << "\nProgram ended.\n";
        exit(0);
    }
    else
    {
        system("cls");
        getStatus();
    }
}
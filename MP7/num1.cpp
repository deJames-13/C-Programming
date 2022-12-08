#include <iostream>
#include <iomanip>
#include <windows.h>
#include <conio.h>
using namespace std;

void getInput(float &ft, float &in);
void convert(float ft, float in, float &ftm, float &ftcm, float &itm, float &itcm);
void display(float ft, float in, float ftm, float ftcm, float itm, float itcm);
void runProgram();
void getStatus();

int main()
{
    // Void functions
    runProgram();
    return 0;
}

void runProgram()
{
    float feet = 0, inches = 0, feetToMeter = 0, feetToCM = 0, inchToMeter = 0, inchToCM = 0;
    cout << "\nFeet/Inches -  Meter/Centimeter Conversion\n";

    // INPUT
    getInput(feet, inches);
    // PROCESS
    convert(feet, inches, feetToMeter, feetToCM, inchToMeter, inchToCM);
    // OUTPUT
    display(feet, inches, feetToMeter, feetToCM, inchToMeter, inchToCM);

    // Ask to continue
    getStatus();
}

void getInput(float &ft, float &in)
{
    cout << "Enter the length in feet: ";
    cin >> ft;
    cout << "Enter the length in inches: ";
    cin >> in;
}
void convert(float ft, float in, float &ftm, float &ftcm, float &itm, float &itcm)
{

    float INCHES_TO_FOOT = 1.0 / 12.0;
    float FT_TO_METER = 0.3048;
    float METER_TO_CENTIMETER = 100;

    ftm = ft * FT_TO_METER;
    ftcm = ftm * METER_TO_CENTIMETER;

    itm = in * INCHES_TO_FOOT * FT_TO_METER;
    itcm = itm * METER_TO_CENTIMETER;
}
void display(float ft, float in, float ftm, float ftcm, float itm, float itcm)
{
    cout << fixed << setprecision(2);
    cout << "\nOUTPUT\n"
         << setw(20) << "Value" << setw(15) << "To Meters" << setw(10) << "To CM" << endl
         << setw(10) << "Feet: " << setw(10) << ft << setw(15) << ftm << setw(10) << ftcm << endl
         << setw(10) << "Inches: " << setw(10) << in << setw(15) << itm << setw(10) << itcm
         << endl;
}

void getStatus()
{
    char ans;
    cout << "\nDo you want to continue?\n";
    ans = tolower(getch());
    cout << ans << "\n";
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
#include <iostream>
#include <iomanip>
#include <windows.h>
#include <conio.h>
using namespace std;

void getInput(float &r, float &h);
void calcVolume(float r, float h, float &vol);
void display(float r, float h, float vol);
void runProgram();
void getStatus();

int main()
{
    runProgram();
    return 0;
}

void runProgram()
{
    float rad = 0, height = 0, volume = 0;
    cout << "\nVOLUME of a Cone\n";

    getInput(rad, height);
    calcVolume(rad, height, volume);
    display(rad, height, volume);
    getStatus();
}

void getInput(float &r, float &h)
{
    cout << "Enter the radius: ";
    cin >> r;
    cout << "Enter the height: ";
    cin >> h;
}
void calcVolume(float r, float h, float &vol)
{
    float PI = 3.14;
    vol = PI * r * r * h;
}
void display(float r, float h, float vol)
{
    cout << fixed << setprecision(2);
    cout << "\nThe volume of the cone with\n"
         << "Radius: " << r << "\n"
         << "Height: " << h << "\n"
         << "Volume: " << vol << endl;
}

void getStatus()
{
    char ans;
    cout << "\nDo you want to continue?\n";
    ans = tolower(getch());
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
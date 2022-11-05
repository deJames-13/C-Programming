#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
#include <conio.h>
using namespace std;

int main()
{
    string display = "";
    int pos = 0;
    char ans;
    do
    {
        ans = 0;
        system("cls");
        cout << "Position codes are from 1 - 6\nEnter an invalid code to quit." << endl;
        do
        {
            // INPUT
            cout << "\nEnter a position code: ";
            cin >> pos;

            // PROCESS
            switch (pos)
            {
            case 1:
                display = "Messenger";
                break;
            case 2:
                display = "Encoder";
                break;
            case 3:
                display = "Programmer";
                break;
            case 4:
                display = "System Analyst";
                break;
            case 5:
                display = "Server Engineer";
                break;
            case 6:
                display = "Network Administrator";
                break;

            default:
                display = "Invalid Position Code";
                break;
            }

            // OUTPUT
            cout << "Positon: " << display << endl;
        } while (!(pos <= 0 || pos > 6));

        do
        {
            cout << "\nDo you want to continue? y/n ";
            ans = tolower(getch());
        } while (!(ans == 'y' || ans == 'n'));
    } while (ans == 'y');
    cout << "\nProgram ended." << endl;

    return 0;
}
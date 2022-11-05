#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
#include <conio.h>
using namespace std;

int main()
{
    int p_reading = 0;
    char ans;
    string display = "";
    do
    {
        ans = 0;

        cout << "\nEnter the pollution reading: ";
        cin >> p_reading;

        if (p_reading < 0)
            break;

        if (p_reading < 30)
        {
            display = "Comfortable";
        }
        else if (p_reading >= 30 && p_reading <= 60)
        {
            display = "Moderate";
        }
        else
        {
            display = "Dangerous";
        }

        cout << endl
             << setw(20) << "Pollution Reading" << setw(20) << "Message\n"
             << setw(20) << p_reading << setw(19) << display << endl;

        do
        {
            cout << "\nDo you want to continue? y/n ";
            ans = tolower(getch());
        } while (!(ans == 'y' || ans == 'n'));
    } while (ans == 'y');
    cout << "\nProgram ended." << endl;

    return 0;
}
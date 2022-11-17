#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
#include <conio.h>
using namespace std;

int main()
{
    int num1 = 0, num2 = 0;
    string display = "";
    char ans;
    do
    {
        ans = 0;
        // system("cls");

        cout << "\nEnter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        if (num1 == 0 && num2 == 0)
        {
            display = "Two zeros";
        }
        else if (num1 == num2)
        {
            display = "EQUALS";
        }
        else if (num1 > num2)
        {
            display = "FIRST";
        }
        else
        {
            display = "SECOND";
        }

        cout << "\nOUTPUT: " << display << endl;

        do
        {
            cout << "\nDo you want to continue? y/n ";
            ans = tolower(getch());
        } while (!(ans == 'y' || ans == 'n'));
    } while (ans == 'y');
    cout << "\nProgram ended." << endl;

    return 0;
}

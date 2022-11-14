#include <iostream>
#include <windows.h>
#include <iomanip>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
    char ans;
    float length, area;

    do
    {
        ans = ' ';

        cout << "\nEnter the length of the square: ";
        cin >> length;

        area = length * length;

        cout << "Length of the square: " << setw(11) << length << endl
             << "Area of the square: " << setw(13) << area << endl;

        do
        {
            cout << "\nDo you want to continue? (y/n) ";
            ans = tolower(getch());
        } while (!(ans == 'y' || ans == 'n'));
    } while (ans == 'y');

    return 0;
}
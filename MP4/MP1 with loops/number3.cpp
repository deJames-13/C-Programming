#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
    char ans;
    float time, DEPTH, g;
    g = 9.8;
    do
    {
        ans = ' ';
        cout << "\nEnter the time (in seconds): ";
        cin >> time;

        DEPTH = 0.5 * g * time * time;

        cout << "The depth of the mine shaft is: " << setprecision(3) << DEPTH << endl;

        while (!(ans == 'y' || ans == 'n'))
        {
            cout << "\nDo you want to continue? (y/n)";
            ans = tolower(getch());
        }

    } while (ans == 'y');

    return 0;
}

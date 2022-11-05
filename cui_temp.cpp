#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
#include <conio.h>
using namespace std;

int main()
{
    int var = 0;
    char ans;
    do
    {
        ans = 0;
        do
        {
            cout << "\nDo you want to continue? y/n ";
            ans = tolower(getch());
        } while (!(ans == 'y' || ans == 'n'));
    } while (ans == 'y');
    cout << "\nProgram ended." << endl;

    return 0;
}
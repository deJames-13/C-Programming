#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main()
{
    int peopleTypes[20];
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    int i = 0, input = 0;

    // INPUT
    for (i = 0; i < 20; i++)
    {
        cout << "Enter the value " << i + 1 << ": ";
        cin >> input;
        if (input < 0)
        {
            cout << "bawal negative";
            exit(0);
        }
        if (!(input == 1 || input == 2 || input == 3 || input == 4))
        {
            cout << "mali values mo, dat 1 to 4 lang kase\n";
            continue;
        }
        peopleTypes[i] = input;
    }
    // PROCESS
    for (i = 0; i < i; i++)
    {
        switch (peopleTypes[i])
        {
        case 1:
            c1++;
            break;
        case 2:
            c2++;
            break;
        case 3:
            c3++;
            break;
        case 4:
            c4++;
            break;

        default:
            break;
        }
    }
    // OUTPUT
    cout << "\nOUTPUT\n";
    cout << "Infant: " << c1 << endl;
    cout << "Child: " << c2 << endl;
    cout << "Teenager: " << c3 << endl;
    cout << "Adult: " << c4 << endl;

    return 0;
}

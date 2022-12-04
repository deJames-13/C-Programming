#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main()
{
    int i;
    int peopleTypes[20];
    int counters[] = {0, 0, 0, 0};
    string category[] = {"Infant", "Child", "Teenager", "Adult"};
    int sizeCount = 0, temp = 0;

    // INPUT
    while (sizeCount < 20)
    {
        cout << "Enter the value " << sizeCount + 1 << ": ";
        cin >> temp;
        if (temp < 0)
        {
            cout << "Error. Invalid Input\n";
            cout << "Data entry terminated...\nShowing OUTPUT\n\n";
            break;
        }
        if (!(temp > 0 && temp < 5))
        {
            cout << "\nPlease enter a valid value. \nValid values are from 1 to 4\n";
            continue;
        }
        peopleTypes[sizeCount] = temp;
        sizeCount++;
    }
    // PROCESS
    for (i = 0; i < sizeCount; i++)
    {
        switch (peopleTypes[i])
        {
        case 1:
            counters[0]++;
            break;
        case 2:
            counters[1]++;
            break;
        case 3:
            counters[2]++;
            break;
        case 4:
            counters[3]++;
            break;

        default:
            break;
        }
    }
    // OUTPUT
    cout << "\nOUTPUT\n";
    for (i = 0; i < 4; i++)
    {
        cout << category[i] << ": " << counters[i] << "\n";
    }

    return 0;
}

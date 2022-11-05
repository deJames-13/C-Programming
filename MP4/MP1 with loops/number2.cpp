#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>
#include <ctype.h>

using namespace std;

int main()
{
    float tenderedAmount, itemCost, changeDue;
    char ans;
    do
    {
        ans = ' ',
        cout << "\nEnter the amount tendered: ";
        cin >> tenderedAmount;
        cout << "Enter the cost of the item: ";
        cin >> itemCost;

        changeDue = tenderedAmount - itemCost;

        cout << "Tendered Amount: " << setw(10) << tenderedAmount << endl
             << "Item Cost: " << setw(16) << itemCost << endl
             << "Change Due: " << setw(15) << changeDue << endl;

        while (!(ans == 'y' || ans == 'n'))
        {
            cout << "\nDo you want to continue? (y/n)";
            ans = tolower(getch());
        }

    } while (ans == 'y');

    return 0;
}
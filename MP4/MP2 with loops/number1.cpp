#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
#include <conio.h>
using namespace std;

int main()
{
    // Variables
    int salary = 0;
    float netSalary = 0, taxRate = 0;
    string display = "";
    char ans;

    do // Program Loop
    {
        ans = 0;
        // system("cls");
        // INPUT
        cout << "\nEnter your Salary: ";
        cin >> salary;

        // PROCESS
        if (salary < 0)
        {
            break;
        }
        if (salary >= 0 && salary <= 4000)
        {
            display = "You don't have to pay tax";
        }
        else if (salary >= 4001 && salary <= 34999)
        {
            taxRate = 0.3;
            display = "You have to pay a 30\% tax";
        }
        else if (salary >= 35000)
        {
            taxRate = 0.48;
            display = "You have to pay a 48\% tax";
        }
        netSalary = salary - (salary * taxRate);

        // OUTPUT
        cout
            << endl
            << setw(20) << "Salary" << setw(20) << "Tax Applied" << setw(20) << "Net Salary" << endl
            << setw(20) << salary << setw(19) << taxRate * 100 << "\%" << setw(20) << netSalary << endl;

        cout
            << endl
            << display << " on your salary of " << salary
            << endl
            << "Your total salary will be: " << netSalary
            << endl;

        do
        {
            cout << "\nDo you want to continue? y/n ";
            ans = tolower(getch());
        } while (!(ans == 'y' || ans == 'n'));

    } while (ans == 'y');
    cout << "\nProgram ended." << endl;

    return 0;
}
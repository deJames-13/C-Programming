#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>

using namespace std;

int main()
{
    string ans;
    int count = 0;
    float celsius = 0, increment_value = 0, farenheit = 0;
    do
    {
        ans = "";
        system("cls");
        // CONSOLE HEADER
        cout << "*****************************************\n"
             << "*\tCelsius to Farenheit Conversion\n"
             << "*****************************************\n";

        // INPUT
        cout << "\nEnter the value for Celsius: \t\t";
        cin >> celsius;
        cout << "Enter the number of conversions: \t";
        cin >> count;
        cout << "Enter the increment value: \t\t";
        cin >> increment_value;

        // PROCESS
        cout << setprecision(3);

        // Setting the output table
        cout << "\n[OUTPUT]\n\n"
             << "No." << setw(13) << "Celsius" << setw(17) << "Farenheit" << endl;

        for (int i = 1; i <= count; i++)
        {
            farenheit = ((9.0 / 5.0) * celsius) + 32.0;
            cout << i << setw(13) << celsius << setw(17) << farenheit << "\n";

            celsius += increment_value;

            // OUTPUTs
        }
        while (!(ans == "n" || ans == "N" || ans == "y" || ans == "Y"))
        {
            cout << "\nDo you want to continue: ";
            cin >> ans;
        }

    } while (!(ans == "n" || ans == "N"));

    return 0;
}
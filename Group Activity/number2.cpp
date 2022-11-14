// Espinosa, Derick James M.
// Number 4

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int index;
    double sum = 0, ave = 0;
    int size = 9;
    double prices[9] = {0};
    cout << "Enter the price values: \n";
	// INPUTS
    for (index = 0; index < size; index++)
    {
        cout << "Price " << index + 1 << ": ";
        cin >> prices[index];
    }
    cout << endl;
    // PROCESS
    for (index = 0; index < size; index++)
    {
        sum = sum + prices[index];

        cout << setw(10)
             << prices[index];
        if (((index + 1) % 3) == 0)
        {
            cout << "\n";
        }
    }
    ave = sum / size;
	
	// OUTPUT
    cout << "Totals"
         << ":" << sum << endl
         << "Average"
         << ":" << ave;

    return 0;
}
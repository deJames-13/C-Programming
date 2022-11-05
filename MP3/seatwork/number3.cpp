#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int range = 20;
    int gallons = 0;
    float GALLONS_TO_LITERS = 3.875;
    float liters = 0;

    cout << "Gallons" << setw(11) << "Liters\n\n";
    for (gallons = 10; gallons <= range; gallons++)
    {
        liters = gallons * GALLONS_TO_LITERS;
        cout << gallons << setw(15) << liters << endl;
    }

    return 0;
}
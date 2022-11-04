#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int range = 20;
    float GALLONS_TO_LITERS = 3.875;
    float liters = 0;
    cout << "Gallons" << setw(11) << "Liters\n\n";
    for (int i = 10; i <= range; i++)
    {
        liters = i * GALLONS_TO_LITERS;
        cout << i << setw(15) << liters << endl;
    }

    return 0;
}
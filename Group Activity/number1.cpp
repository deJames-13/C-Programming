// Espinosa, Derick James M.
// Number 2

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double maximum = 0;
    double minimum = 0;
    int size = 9;
    int index;
    double slopes[] = {17.24, 25.63, 5.94, 33.92, 3.71, 32.84, 35.93, 18.24, 6.92};

    for (index = 1; index < size; index++)
    {
        if (index == 1)
        {
            maximum = slopes[index];
            minimum = slopes[index];
        }
        if (slopes[index] > maximum)
        {
            maximum = slopes[index];
        }
        if (slopes[index] < minimum)
        {
            minimum = slopes[index];
        }
    }
    cout << setprecision(3);
    cout << "Maximum value: " << maximum << endl;
    cout << "Minimum value: " << minimum << endl;

    return 0;
}
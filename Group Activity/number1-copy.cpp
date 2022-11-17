#include <iostream>
using namespace std;

int main()
{
    double slopes[] = {17.24, 25.63, 5.94, 33.92, 3.71, 32.84, 35.93, 18.24, 6.92};
    double max = slopes[0], min = slopes[0];
    int i = 0; // 1

    while (i <= 8)
    {
        if (slopes[i] > max)
        {
            max = slopes[i]; // 25.63
        }
        if (slopes[i] < min)
        {
            min = slopes[i]; // 5.94
        }

        i++; // 1 - 2 - 3 - 4
    }
    cout << "Maximum Value: " << max << endl;
    cout << "Minimum Value: " << min << endl;

    return 0;
}
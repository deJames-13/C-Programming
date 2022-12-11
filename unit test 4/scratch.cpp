#include <iostream>
using namespace std;
int main()
{
    int i = 0, j = 0, k = 0, l = 0, temp1 = 0, temp2 = 0;
    int a[10] = {2020, 1001, 949, 1050, 867, 346, 1025, 454, 1500, 150};
    int b[10] = {500, 62, 85, 33, 125, 125, 105, 79, 350, 80};
    char name = 0;
    cout << "Type Your Name's Initial Letter': ";
    cin >> name;
    cout << "Hi, Mr. " << name << "! This is the Part Numbers and Quantity  \n";
    cout << "Part Numbers\n";
    for (i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }
    cout << "\nQuantity\n";

    for (k = 0; k < 10; k++)
    {
        cout << b[k] << "\t";
    }
    cout << endl;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp1 = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp1;
            }
        }
    }
    cout << endl;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (b[j] < b[j + 1])
            {
                temp1 = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp1;
            }
        }
    }
    cout << "Sorted Elements are: \n";
    for (i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;

    for (k = 0; k < 10; k++)
    {
        cout << b[k] << "\t";
    }
}
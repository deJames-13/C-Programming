#include <iostream>
#include <string>
using namespace std;

int main()
{
    int peopleType[20];
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    int c4 = 0;
    for (int i = 0; i < 20; i++)
    {
    }

    for (int i = 0; i < 20; i++)
    {

        switch (peopleType[i])
        {
        case 1:
            c1++;
            break;
        case 2:
            c2++;
            break;
        case 3:
            c3++;
            break;
        case 4:
            c4++;
            break;

        default:
            break;
        }
    }

    cout << "Infant: " << c1 << endl;
    cout << "Child: " << c2 << endl;
    cout << "Teen: " << c3 << endl;
    cout << "Adult: " << c4 << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int peopleType[20];
    int i, input = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    cout << "Enter number 1 for Infant" << endl;
    cout << "Enter number 2 for Child" << endl;
    cout << "Enter number 3 for Teenager" << endl;
    cout << "Enter number 4 for Adult" << endl
         << endl;

    for (i = 0; i < 20; i++)
    {
        cout << "People number " << i + 1 << ": ";
        cin >> input;
        if (input < 0)
        {
            cout << "bawal negative";
            exit(0);
        }
        if (!(input == 1 || input == 2 || input == 3 || input == 4))
        {
            cout << "mali values mo, dat 1 to 4 lang kase\n";
            continue;
        }
        peopleType[i] = input;
    }

    for (int i = 0; i < 20; i++)
    {

        switch (peopleType[i])
        {
        case 1:
            s1 = s1 + 1;
            break;
        case 2:
            s2 = s2 + 1;
            break;
        case 3:
            s3 = s3 + 1;
            break;
        case 4:
            s4 = s4 + 1;
            break;

        default:
            break;
        }
    }

    cout << endl
         << endl
         << "Total Infant: " << s1 << endl;
    cout << "Total Child: " << s2 << endl;
    cout << "Total Teenager: " << s3 << endl;
    cout << "Total Adult: " << s4 << endl;
    return 0;
}
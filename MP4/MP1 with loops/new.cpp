#include <iostream>
using namespace std;

int main()
{
    char a = ' ';
    int num, binary, temp, mod;
    int array[256];

    do
    {
        cout << "Enter a decimal whole number: ";
        cin >> num;

        while (num != 0)
        {
            num = num / 2;
            mod = num % 2;
        }

        do
        {
            cout << "\n Do you want to continue?";
            cin >> a;
            tolower(a);
        } while (!(ans == 'y' || ans == 'n'));

    } while (ans == 'y');

    retuen 0;
}

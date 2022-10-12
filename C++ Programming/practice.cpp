#include <iostream>
using namespace std;

int main()
{
    int option;
    char answer;
    do
    {
        system("cls");
        cout << "********MENU**********" << endl;
        cout << "[1] PRIME NUMBER" << endl;
        cout << "[2] RIGHT TRIANGLE" << endl;
        cout << "[3] FIBONACCI SERIES" << endl;
        cout << "[4] FACTORIAL" << endl;
        cout << "[5] EXIT" << endl;
        cout << "***********************" << endl;
        cout << "ENTER YOUR CHOICE: ";
        cin >> option;

        switch (option)
        {
        case 1:
            int num, i;
            cout << "Enter a number: ";
            cin >> num;
            for (i = 2; i < num; i++)
            {
                if (num % i == 0)
                {
                    cout << num << " "
                         << "is NOT a Prime Number" << endl;
                    break;
                }
            }
            if (i == num)
            {
                cout << num << " "
                     << "is a Prime Number" << endl;
            }
            if (num < 2)
            {
                cout << num << " "
                     << "is NOT a Prime Number" << endl;
            }
            break;
        case 2:
            int n, j, size;
            cout << "Enter the size of the Right Triangle: ";
            cin >> size;
            for (n = 1; n <= size; n++)
            {
                for (j = 1; j <= n; j++)
                {
                    cout << j << " ";
                }
                cout << endl;
            }
            break;
        case 3:
            int x, number, term1, term2, nextterm;
            term1 = 0;
            term2 = 1;
            nextterm = 0;
            cout << "Enter a number: ";
            cin >> number;

            for (x = 1; x <= number; ++x)
            {
                if (x == 1)
                {
                    cout << term1 << " ";
                    continue;
                }
                if (x == 2)
                {
                    cout << term2 << " ";
                    continue;
                }
                nextterm = term1 + term2;
                term1 = term2;
                term2 = nextterm;
                cout << nextterm << " ";
            }
            cout << endl;
            break;
        case 4:
            int z, result, w;
            cout << "Enter a number: ";
            cin >> z;
            result = z;
            cout << "Factorial of ";
            for (w = z; w > 0; w--)
            {
                if (w != z)
                {
                    cout << "*";
                    result *= w;
                }
                cout << w;
            }
            cout << " "
                 << "is"
                 << " " << result << endl;
            break;
        }
        if (option < 5 && option > 0)
        {
            do
            {
                cout << endl;
                cout << "Return to Main Menu? [Y/N] ";
                cin >> answer;
            } while (answer != 'Y' && answer != 'N');

            if (answer == 'Y')
            {
                continue;
            }
        }
        else
        {
            break;
        }

    } while (answer == 'Y');
    cout << "\nProgram stopped.\n";
    return 0;
}
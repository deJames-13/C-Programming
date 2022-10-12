#include <iostream>
using namespace std;
int main()
{
    int choice, num, i;
checkpoint:
    cout << "********MENU**********" << endl;
    cout << "[1] PRIME NUMBER" << endl;
    cout << "[2] RIGHT TRIANGLE" << endl;
    cout << "[3] FIBONACCI SERIES" << endl;
    cout << "[4] FACTORIAL" << endl;
    cout << "[5] EXIT" << endl;
    cout << "***********************" << endl;
    cout << "ENTER YOUR CHOICE: ";
    cin >> choice;
    {
        switch (choice)
        {
        case 1:
            int num, i;
            char choice;
            do
            {
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
                do
                {
                    cout << "Do you want to repeat the whole process [Y/N]? ";
                    cin >> choice;
                } while (choice != 'Y' && choice != 'N');
                // system("cls");
            } while (choice == 'Y');
            goto checkpoint;
            break;

        case 2:
            int n, j, size;
            char choice1;
            do
            {
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
                do
                {
                    cout << "Do you want to repeat the whole process [Y/N]? ";
                    cin >> choice1;
                } while (choice1 != 'Y' && choice1 != 'N');
                // system("cls");
            } while (choice1 == 'Y');
            goto checkpoint;
            break;

        case 3:
        {

            int number, term1 = 0, term2 = 1, nextterm = 0;
            int x;
            char choice2;
            do
            {
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
                do
                {
                    cout << "Do you want to repeat the whole process [Y/N]? ";
                    cin >> choice2;
                } while (choice2 != 'Y' && choice2 != 'N');
                // system("cls");
            } while (choice2 == 'Y');
        }
            goto checkpoint;
            break;

        case 4:
            int z, result, w;
            char choice3;
            do
            {
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
                do
                {
                    cout << "Do you want to repeat the whole process [Y/N]? ";
                    cin >> choice3;
                } while (choice3 != 'Y' && choice3 != 'N');
                // system("cls");
            } while (choice3 == 'Y');
            goto checkpoint;
            break;

        case 5:
            cout << "End of the Program";
            break;
        }
    }
}

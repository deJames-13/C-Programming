#include <iostream>
using namespace std;

int main()
{
    int option;
    char answer;
    do
    {
        cout << "Pick an option: ";
        cin >> option;

        switch (option)
        {
        case 1:
            /* code */
            cout << "You picked 1." << endl;
            break;
        case 2:
            /* code */
            cout << "You picked 2." << endl;

            break;
        case 3:
            /* code */
            cout << "You picked 3." << endl;
            break;
        case 4:
            /* code */
            cout << "You picked 4." << endl;
            break;
        }
        cout << "Return to Main Menu? [Y/N]";
        cin >> answer;
        if (answer == 'Y')
        {
            continue;
        }
        else if (answer == 'N')
        {
            break;
        }

    } while (option < 5 && option > 0);

    return 0;
}
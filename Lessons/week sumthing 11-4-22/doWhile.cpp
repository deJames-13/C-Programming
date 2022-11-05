#include <iostream>
using namespace std;

int main()
{
    // Do While is a type of loop that executes the codeblock (codes na nasa loob ng {}) first before checking for the condition

    int num = 0;
    cout << "DO-WHILE" << endl;
    do
    {
        cout << "Guess the number: ";
        cin >> num;
        if (num != 69)
        {
            cout << num << " is not the number. "
                 << "Try again\n";
        }

    } while (num != 69);
    cout << "You guessed the best number! " << num << endl;

    return 0;
}
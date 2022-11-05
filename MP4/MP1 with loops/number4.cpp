#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    float score = 0, ave = 0, input = 0;
    int count, grade_nums = 0;
    char ans;
    do
    {
        ans = ' ';
        cout << "\nEnter the number of grades: ";
        cin >> grade_nums;

        for (count = 0; count < grade_nums; count++)
        {
            cout << "Grade " << count + 1 << " : ";
            cin >> input;
            score += input;
        }
        ave = score / count;
        cout << "\nThe average score of the student is: " << ave << endl;
        while (!(ans == 'y' || ans == 'n'))
        {
            cout << "\nDo you want to continue? (y/n) ";
            ans = tolower(getch());
        }

    } while (ans == 'y');

    return 0;
}
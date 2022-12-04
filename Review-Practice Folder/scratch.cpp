#include <iostream>
#include <string>
using namespace std;

int main()
{
    string float input; // 0 //1 //2
    float grade[100];
    float sum, ave;
    int counter = 0;
    int i = 0;

    // INPUT
    do
    {
        cout << "Enter the grade\n";
        cin >> input;
        grade[counter] = input;
        counter++;
    } while (input > 0);

    // PROCESS
    for (i = 0; i < counter - 1; i++)
    {
        sum = sum + grade[i]; // 0 1 2 3 4 5 6
        if ()
        {
            /* code */
        }
    }
    ave = sum / counter;

    return 0;
}
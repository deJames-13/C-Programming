#include <iostream>
#include <iomanip>
using namespace std;

int getScores();
int getAverage(int sum);

int main()
{
    int sum = 0;
    float ave = 0;

    for (int i = 0; i < 4; i++)
    {
        sum = getAverage(sum);
    }
    ave = (float)sum / 4.0;
    cout << setprecision(2) << "\nThe average is: " << ave << "\n";

    return 0;
}

int getScores()
{
    int g = 0;
    cout << "Enter the score for the exam: ";
    cin >> g;
    return g;
}

int getAverage(int sum)
{
    int grade;
    grade = getScores();
    sum = sum + grade;
    return sum;
}	
#include <iostream>
#include <iomanip>
using namespace std;

int getScores();
int getAverage(int sum, int &gcount);
int askUser(int sum, int &gcount);

int main()
{
    int sum = 0, gcount = 0;
    float ave = 0;

    ave = getAverage(sum, gcount);
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

int getAverage(int sum, int &gcount)
{
    int grade;
    float ave;
    grade = getScores();
    sum = sum + grade;
    gcount++;
    ave = (float)sum / gcount;
    cout << sum << ": " << gcount << ": " << ave << "\n";
    askUser(sum, gcount);
    return ave;
}

int askUser(int sum, int &gcount)
{
    char a;
    cout << "Do you want to continue\n";
    cin >> a;
    a = tolower(a);
    if (a == 'y')
    {
        getAverage(sum, gcount);
    }
    else if (a == 'n')
    {
        return ave;
    }
    else
    {
        askUser(sum, gcount);
    }
    return 0;
}
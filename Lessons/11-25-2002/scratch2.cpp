#include <iostream>
#include <iomanip>
using namespace std;

int input(int &exam1, int &exam2, int &exam3);
int process(int &exam1, int &exam2, int &exam3, int &exam41);
int output();

int main()
{

    output();
    return 0;
}

int input(int &exam1, int &exam2, int &exam3)
{
    int exam4;
    cout << "Enter 1st Exam's Value' " << endl;
    cin >> exam1;
    cout << "Enter 2nd Exam's Value' " << endl;
    cin >> exam2;
    cout << "Enter 3rd Exam's Value' " << endl;
    cin >> exam3;
    cout << "Enter 4th Exam's Value' " << endl;
    cin >> exam4;

    return exam4;
}
int process(int &exam1, int &exam2, int &exam3, int &exam41)
{

    int average = 0;
    exam41 = input(exam1, exam2, exam3);
    average = (exam1 + exam2 + exam3 + exam41) / 4;
    return average;
}
int output()
{

    int exam1 = 0, exam2 = 0, exam3 = 0, exam41 = 0;
    int average1 = 0;

    average1 = process(exam1, exam2, exam3, exam41);

    cout << "The 1st exam's value is " << exam1 << endl;
    cout << "The 2nd exam's value is " << exam2 << endl;
    cout << "The 3rd exam's value is " << exam3 << endl;
    cout << "The 4th exam's value is " << exam41 << endl;
    cout << "The Exam's average is " << average1 << endl;
    return 0;
}
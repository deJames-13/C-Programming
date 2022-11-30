#include <iostream>
#include <string>
using namespace std;

int main()
{
    int quizzes[3];
    int units[3];
    int mps[4];
    int term_test = 0;

    int totalExams = 11, items = 100;
    float gq, gu, gm, fg;
    int wg;
    int missing = 0;

    string grade;
    string remark;

    // INPUTS
    for (int i = 0; i < 4; i++)
    {
        if (i < 3)
        {
            cout << "Enter quiz " << i + 1 << ": ";
            cin >> quizzes[i];
            if (quizzes[i] == 0)
                missing++;
            cout << "Enter unit test " << i + 1 << ": ";
            cin >> units[i];
            if (units[i] == 0)
                missing++;
        }
        cout << "Enter machine problem " << i + 1 << ": ";
        cin >> mps[i];
        if (mps[i] == 0)
            missing++;
    }
    cout << "Enter term test :";
    cin >> term_test;

    for (int i = 0; i < 4; i++)
    {
        if (i < 3)
        {
            gq += quizzes[i];
            gu += units[i];
        }
        gm += mps[i];
    }
    gq /= 3.0;
    gu /= 3.0;
    gm /= 4.0;

    wg = (int)((gq * 0.2) + (gu * 0.25) + (gm * 0.35) + (gq * 0.2));
    switch (wg)
    {
    case 98 ... 100:
        fg = 1.00;
        break;
    case 91 ... 97:
        fg = 1.25;
        break;
    case 85 ... 90:
        fg = 1.50;
        break;
    case 79 ... 84:
        fg = 1.75;
        break;
    case 73 ... 78:
        fg = 2.00;
        break;
    case 67 ... 72:
        fg = 2.25;
        break;
    case 61 ... 66:
        fg = 2.50;
        break;
    case 55 ... 60:
        fg = 2.75;
        break;
    case 50 ... 54:
        fg = 3.00;
        break;
    default:
        fg = 5.00;
        break;
    }
    if (missing == 3)
    {
        grade = "INC";
        remark = "Incomplete";
    }
    else if (missing >= 4)
    {
        grade = "DRP";
        remark = "Dropped";
    }
    else if (wg < 50)
    {
        remark = "Failed";
    }
    else
    {
        remark = "Passed";
    }

    cout << "\nMISSING: " << missing;
    cout << "\n[SCORES]\n";
    for (int i = 0; i < 4; i++)
    {
        if (i < 3)
        {
            cout << "Quiz : " << i + 1 << quizzes[i] << endl;
            cout << "Unit Test : " << i + 1 << units[i] << endl;
        }
        cout << "Machine Problem : " << i + 1 << mps[i] << endl;
    }
    cout << "Term Test : " << term_test << endl;

    cout << "\n[Grades]\n";
    cout << "Quiz Weighted Grade : " << gq << endl;
    cout << "Unit Test Weighted Grade : " << gu << endl;
    cout << "Machine Problem Weighted Grade : " << gm << endl;
    cout << "\n[Final Grade]\n";
    cout << "Weighted Grade : " << wg << endl;
    cout << "Final Grade : " << fg << endl;
    cout << "Remark : " << remark << endl;
    cout << "Grade : " << grade << endl;

    return 0;
}
#include <iostream>
#include <iomanip>

using namespace std;

float GoIn(float &rad);
void SolveHere(float &VolCy, float &hei1, float &rad);
void GoOut();

main()
{

    GoOut();
    return 0;
}
float GoIn(float &rad)
{

    float hei;

    cout << "What is the Radius of the Cylinder?" << endl;
    cin >> rad;
    cout << "What it's Height measurement?" << endl;
    cin >> hei;
    return hei;
}
void SolveHere(float &VolCy, float &hei1, float &rad)
{

    float pi = 3.14;

    hei1 = GoIn(rad);
    VolCy = pi * rad * rad * (hei1 / 3);
}
void GoOut()
{

    float VolCy = 0, hei1 = 0, rad = 0;

    SolveHere(VolCy, hei1, rad);
    cout << fixed << setprecision(2);
    cout << "The Volume of the Cylinder is " << VolCy << endl;
}
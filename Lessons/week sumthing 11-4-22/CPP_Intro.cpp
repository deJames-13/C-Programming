/* HEADERS - important to your code */
#include <iostream>
using namespace std;
/* HEADERS */

int main()
{
    string username = ""; // string is a derived data type in c++
    int age = 0;

    // cout - Outputs character in console
    // cin - Inputs character in console
    // endl - short for end line, createa a new line similar to "\n"
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter age: ";
    cin >> age;

    // .length() - returns the length of a string;
    while (!(username.length() <= 15))
    {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter age: ";
        cin >> age;
    }
    cout << "You are " << username << "\n"
         << "And your age is " << age << "\n";

    return 0;
}
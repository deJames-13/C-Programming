#include <iostream>
#include <iomanip>
#include <windows.h>
#include <conio.h>
using namespace std;

void getInput(float &p, float &o);
void convert(float p, float o, float &pkg, float &pg, float &okg, float &og);
void display(float p, float o, float pkg, float pg, float okg, float og);
void runProgram();
void getStatus();

int main()
{
    // starter function
    runProgram();
    return 0;
}
void runProgram()
{
    float pounds, ounces, poundsToKilo, poundsToGrams, ounceToKilo, ounceToGrams;
    cout << "\nPounds/Ounces - Kilograms/Grams\n";
    // INPUT
    getInput(pounds, ounces);
    // PROCESS
    convert(pounds, ounces, poundsToKilo, poundsToGrams, ounceToKilo, ounceToGrams);
    // OUTPUT
    display(pounds, ounces, poundsToKilo, poundsToGrams, ounceToKilo, ounceToGrams);

    // ASKS to CONTINUE
    getStatus();
}

void getInput(float &p, float &o)
{
    cout << "Enter the weight in pounds: ";
    cin >> p;
    cout << "Enter the weight in ounces: ";
    cin >> o;
}

void convert(float p, float o, float &pkg, float &pg, float &okg, float &og)
{
    float OUNCE_TO_POUND = 1.0 / 16.0;
    float POUND_TO_KILO = 1.0 / 2.2046;
    float KILO_TO_GRAM = 1000;

    // Conversion for pounds to kilogram and grams:
    pkg = p * POUND_TO_KILO;
    pg = pkg * KILO_TO_GRAM;
    // Conversion for ounces to kilogram and grams:
    okg = o * OUNCE_TO_POUND * POUND_TO_KILO;
    og = okg * KILO_TO_GRAM;
}
void display(float p, float o, float pkg, float pg, float okg, float og)
{
    cout << fixed << setprecision(2);
    cout << "\nOUTPUT\n"
         << setw(20) << "Value" << setw(15) << "To Kilogram" << setw(10) << "To Gram" << endl
         << setw(10) << "Pounds: " << setw(10) << p << setw(15) << pkg << setw(10) << pg << endl
         << setw(10) << "Ounces: " << setw(10) << o << setw(15) << okg << setw(10) << og
         << endl;
}
void getStatus()
{
    char ans;
    cout << "\nDo you want to continue?\n";
    ans = tolower(getch());
    cout << ans << "\n";
    if (ans == 'y')
    {
        system("cls");
        runProgram();
    }
    else if (ans == 'n')
    {
        cout << "\nProgram ended.\n";
        exit(0);
    }
    else
    {
        system("cls");
        getStatus();
    }
}
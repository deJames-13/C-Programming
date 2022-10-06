#include <iostream>
using namespace std;

int main()
{

    // VARIABLE INITIALIZING FORMAT
    // typename variable_name {initial value};
    // initializing uses {} or ()

    // WARNING - can possibly contain garbage values;
    int igotgarbage;

    // initial value is ZERO;
    int igotZeroValue{};
    // initial value to integer;
    int igotInteger{13};

    // {} can be used to pass expression
    int iAdd{igotInteger + igotInteger};

    // Traditional initializing variable
    int imANumber = 69;
    int imAZero = 0;

    cout << "Initialized your VARIABLES" << endl;
    return 0;
}
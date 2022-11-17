#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int x, y, mod, quo;
	char ans;

	do
	{
		ans = ' ';
		cout << "\nEnter the first number: ";
		cin >> x;
		cout << "Enter the second number: ";
		cin >> y;

		quo = x / y;
		mod = x % y;

		cout << "The integer quotient is " << quo << endl
			 << "The remainder is " << mod << endl;

		while (!(ans == 'y' || ans == 'n'))
		{
			cout << "\nDo you want to continue? (y/n) ";
			ans = tolower(getch());
		}

	} while (ans == 'y');

	return 0;
}

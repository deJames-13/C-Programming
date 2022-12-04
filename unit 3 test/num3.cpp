#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i, j;
	int l = 0;
	int sumLeft = 0, sumRight = 0;
	int testArr[4][4] = {
		{45, 50, 100, 32},
		{80, 50, 35, 12},
		{150, 300, 75, 90},
		{78, 200, 77, 23},
	};

	for (i = 0; i < 4; i++)
	{
		l = 3;
		for (j = 0; j < 4; j++)
		{
			if (i == j)
			{
				sumRight += testArr[i][j];
				sumLeft += testArr[i][l];
			}
			l--;
		}
	}

	// OUTPUT
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			cout << setw(5) << testArr[i][j];
		}
		cout << "\n";
	}

	cout << "The sum for diagonal left is: " << sumLeft << endl;
	cout << "The sum for diagonal right is: " << sumRight << endl;

	return 0;
}

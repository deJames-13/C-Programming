tw#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE{4};

int main()
{
	int i, j;
	int sumLeft = 0, sumRight = 0;
	int testArr[SIZE][SIZE] = {
		{45, 50, 100, 32},
		{80, 50, 35, 12},
		{150, 300, 75, 90},
		{78, 200, 77, 23},
	};
	// PROCESS
	for (i = 0; i < SIZE; i++)
	{
		sumRight += testArr[i][i];
		sumLeft += testArr[i][(i - (SIZE - 1)) * -1];
	}

	// OUTPUT
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			cout << setw(5) << testArr[i][j];
		}
		cout << "\n";
	}

	cout << "The sum for diagonal left is: " << sumLeft << endl;
	cout << "The sum for diagonal right is: " << sumRight << endl;

	return 0;
}

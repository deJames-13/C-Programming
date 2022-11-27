#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	int num[3][4];
	int r, c, sum, s = 999, h = 0, s_x = 0, s_y = 0, h_x = 0, h_y = 0;
	
	cout << "3 by 4 Array! " << endl << endl;
	cout << "Input data "<< endl;
	
	for (r = 0; r <=2; r++)
	{
		for(c = 0; c <= 3; c++)
		{
			cin >> num[r][c];
		}
		
		cout << endl;
	}
	
	cout << "\nDatas inputted! " << endl;
	for (r = 0; r <=2; r++)
	{
		for(c = 0; c <= 3; c++)
		{
			sum = sum + num[r][c];
			cout << setw(5) << num[r][c];
		}
		
		cout << endl;
	}
	
	cout << "\nSmallest Number among the Inputted! " << endl;
	for (r = 0; r <=2; r++)
	{
		for(c = 0; c <= 3; c++)
		{
			if (num[r][c]<= s){
			s = num[r][c];}
			s_x = r;
			s_y = c;
		}
		
	}
	
	cout << s << endl;
	
	cout<< "\nMaximum Number and Coordinates! " << endl;
	for (r = 0; r <=2; r++)
	{
		for(c = 0; c <= 3; c++)
		{
			if (num[r][c] >= h){
			h = num[r][c];}
			h_x = r + 1;
			h_y = c + 1;
		}
		
	}
	
	cout << h << endl << "Coordinates" << endl << "Row" << h_x << "Column" << h_y;

}

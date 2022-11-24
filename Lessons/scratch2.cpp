#include <iostream>
using namespace std;

int myArr[20];
void getInput(int list[], int dim);

int main()
{
    int arr[20] = {};
    getInput(arr, 20);

    return 0;
}

void getInput(int list[], int dim)
{
    int len = 0;
    int input = 0;

    for (int i = 0; i < dim; i++)
    {
        if (list[i])
        {
            len++;
        }
    }
    if (len < dim)
    {
        cout << "loc[" << len << "]: ";
        cin >> input;
        list[len] = input;
        getInput(list, 20);
    }
}
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));

    int unsorted[100];
    for (int i = 0; i < 100; i++)
    {
        unsorted[i] = rand() % 1000 + 1;
    }
    for (int j = 0; j < 100; j++)
    {
        for (int i = 0; i < 100; i++)
        {
            if (unsorted[i] > unsorted[i + 1])
            {
                int temp = unsorted[i];
                unsorted[i] = unsorted[i + 1];
                unsorted[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 100; i++)
    {
        cout << "Ä " << unsorted[i];
    }

    return 0;
}
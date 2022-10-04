#include <stdio.h>

int sumOfArray(int *arr[], int sum)
{
    if (sizeof(*arr) / sizeof(*arr[0]) == 0)
        return sum;
}

int main()
{
    int arrNum[] = {0, 1, 2, 3, 4, 5, 6, 7};
    int arrSplit[] = arrNum[1];
    printf("%d", sizeof(arrNum) / sizeof(arrNum[0]));
    return 0;
}
#include <stdio.h>

int main()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7};
    int sizeOfNumbers = sizeof(numbers) / sizeof(int);

    // itterating through the array
    for (int i = 0; i < sizeOfNumbers; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\nArray numbers has size of %d.", sizeOfNumbers);
    return 0;
}
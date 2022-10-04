#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 2;
    int *numbers = malloc(sizeof(int) * size);
    int input = 0, i = 0;
    do
    {
        if (i == size)
        {
            size += 2;
            numbers = realloc(numbers, sizeof(int) * size);
            printf("\nReallocated in address: %p\n", *(numbers - 2));
        }
        printf("Enter an integer: ");
        scanf("%d", &input);

        if (input != 1)
        {
            numbers[i] = input;
            i++;
        }

    } while (input != -1);

    int len = i, total = 0;
    for (int x = 0; x < len; x++)
    {
        total += numbers[x];
    }
    printf("\nThe average is %0.2f\n", (float)total / (float)len);

    free(numbers);

    return 0;
}
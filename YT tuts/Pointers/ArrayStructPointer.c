#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int data;
    int *array;
} Info;

int main()
{
    Info a;
    a.data = 6;
    a.array = malloc(sizeof(int) * 5);

    for (int i = 0; i < 5; i++)
    {
        a.array[i] = i + 1;
    }

    Info b;
    b = a;

    printf("b.data: %d\n", b.data);
    for (int i = 0; i < 5; i++)
    {
        printf("b.array[%d]: %d\n", i, b.array[i]);
    }
    printf("a.array: %p\n", a.array);
    printf("b.array: %p\n", b.array);

    b.array[0] = 10;
    printf("a.array: %d\n", a.array[0]);
    return 0;
}
#include <stdio.h>

int find_max(int a, int b)
{
    return (a > b) ? a : b;
}
int main()
{
    int x = 40;
    int y = 5;

    printf("%d", find_max(x, y));
    return 0;
}

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    short size = 10;
    char name[size];

    do
    {
        printf("\nEnter your name? ");
        fgets(name, size, stdin);
        name[strlen(name) - 1] = '\0'; // STRING STRIP, REMOVES THE EMPTY SPACE AT THE END OF THE STRING
    } while (strlen(name) == 0);
    printf("Hello %s", name);

    return 0;
}

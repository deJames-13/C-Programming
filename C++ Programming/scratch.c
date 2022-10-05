#include <stdio.h>

int main()
{
    /*
    char name[] = "Jepoy Dizon";
    printf("t*ng*n*m*, %s\n", name);

    A string/text is a type of data that contains multiple characters.
    -String are also known as an array/collection of characters
    -Strings are enclosed with double quotes


    !!! Strings must always have an initial value !!!
    */
    char name[] = "";

    printf("Enter your name: ");
    scanf("%s", &name); // %s is the formatter for strings

    printf("\nHello, %s\n", name);

    return 0;
}
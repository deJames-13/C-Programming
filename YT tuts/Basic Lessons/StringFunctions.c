#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    //  String Functions
    char string[] = "MY STRING";
    char string2[] = "Hello World";
    int lenOfString = strlen(string);
    // strlwr(string);
    // strupr(string2);
    strcat(string2, string);
    // strcpy(string2, string);
    // strncpy(string, string2, 4);
    int compareString = strcmp(string, string2);
    int compareNString = strncmp(string, string2, 4);
    int compareAllString = strcmpi(string, string2);
    int compareAllNString = strnicmp(string, string2, 1);

    printf("%s\n", string2);
    printf("%d\n", lenOfString);

    return 0;
}

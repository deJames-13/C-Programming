#include <stdio.h>


typedef struct {
    char firstName[64];
    char lastName[64];
    int age;
} Person;

int main()
{
    Person person1;
    person1.firstName = "Jack";
    person1.lastName = "Frost";
    return 0;
}
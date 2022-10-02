#include <stdio.h>
#include <string.h>

struct Person
{
    char name[64];
    int age;
};


int main()
{
    struct Person person1;
    struct Person person2;

    strcpy(person1.name, "Jak");
    strcpy(person2.name, "Ken");
    person1.age = 20;
    person2.age = 23;

    printf("\nName: %s, Age: %d", person1.name, person1.age);
    printf("\nName: %s, Age: %d", person2.name, person2.age);

    return 0;
}
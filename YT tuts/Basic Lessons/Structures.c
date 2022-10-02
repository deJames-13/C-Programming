#include <stdio.h>
#include <string.h>

struct Person
{
    char name[64];
    int age;
};

typedef struct
{
    char name[64];
    int id;
} User;

int main()
{
    struct Person person1;
    User person2;

    strcpy(person1.name, "Jak");
    strcpy(person2.name, "Ken");
    person1.age = 20;
    person2.id = 23123;

    printf("\nName: %s, Age: %d", person1.name, person1.age);
    printf("\nUser: %s, ID: %d", person2.name, person2.id);

    return 0;
}
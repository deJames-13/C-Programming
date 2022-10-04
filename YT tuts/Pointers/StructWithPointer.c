#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char firstName[64];
    char lastName[64];
    int age;
    int grade;
} Student;

void change_grade(Student *s, int new_grade);
void printStudent(Student p);

int main()
{
    Student *student1;
    student1 = calloc(1, sizeof(Student));
    strcpy(student1->firstName, "Jack");
    strcpy(student1->lastName, "Frost");
    student1->age = 23;
    student1->grade = 93;
    printStudent(*student1);
    change_grade(student1, 89);
    printStudent(*student1);

    free(student1);
    return 0;
}

void change_grade(Student *s, int new_grade)
{
    s->grade = new_grade;
}

void printStudent(Student p)
{
    printf("\nName: %s %s\n", p.firstName, p.lastName);
    printf("Age: %d\n", p.age);
    printf("Grade: %d\n", p.grade);
}
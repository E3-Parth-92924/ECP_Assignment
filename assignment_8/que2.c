#include <stdio.h>

typedef struct {
    int roll;
    char name[50];
    int age;
} Student;

void accept_student(Student *s)
{
    printf("Enter Roll, Name, Age: ");
    scanf("%d %s %d", &s->roll, s->name, &s->age);
}

void print_student(const Student *s)
{
    printf("Roll: %d Name: %s Age: %d\n", s->roll, s->name, s->age);
}

int main()
{
    Student s;
    accept_student(&s);
    print_student(&s);
    return 0;
}


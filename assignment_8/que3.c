#include <stdio.h>

typedef struct {
    int roll;
    char name[50];
    int age;
} Student;

void accept_students(Student arr[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("Enter Roll, Name, Age for student %d: ", i + 1);
        scanf("%d %s %d", &arr[i].roll, arr[i].name, &arr[i].age);
    }
}

void print_students(const Student arr[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("Roll: %d Name: %s Age: %d\n", arr[i].roll, arr[i].name, arr[i].age);
    }
}

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    Student students[n];
    accept_students(students, n);
    print_students(students, n);

    return 0;
}


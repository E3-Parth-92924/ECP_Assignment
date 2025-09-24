#include <stdio.h>
#include <string.h>

typedef struct {
    int roll;
    char name[50];
    int age;
} Student;

void sort_by_roll(Student arr[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].roll > arr[j + 1].roll) {
                Student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sort_by_name(Student arr[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j].name, arr[j + 1].name) > 0) {
                Student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
    Student students[3] = {
        {3, "Tejas", 20},
        {1, "Aryan", 21},
        {2, "Harshal", 22}
    };

    printf("Sorted by Roll:\n");
    sort_by_roll(students, 3);
    print_students(students, 3);

    printf("\nSorted by Name:\n");
    sort_by_name(students, 3);
    print_students(students, 3);

    return 0;
}


#include <stdio.h>
#include <string.h>

typedef struct {
    int roll;
    char name[50];
    int age;
} Student;

int search_by_roll(const Student arr[], int n, int roll)
{
    for (int i = 0; i < n; i++) {
        if (arr[i].roll == roll)
            return i;
    }
    return -1;
}

int search_by_name(const Student arr[], int n, const char *name)
{
    for (int i = 0; i < n; i++) {
        if (strcmp(arr[i].name, name) == 0)
            return i;
    }
    return -1;
}

int main()
{
    Student students[3] = {
        {1, "Aryan", 21},
        {2, "Harshal", 22},
        {3, "Tejas", 20}
    };

    int idx = search_by_roll(students, 3, 2);
    if (idx != -1)
        printf("Found by roll: Roll=%d Name=%s Age=%d\n", students[idx].roll, students[idx].name, students[idx].age);
    else
        printf("Not found by roll\n");

    idx = search_by_name(students, 3, "Tejas");
    if (idx != -1)
        printf("Found by name: Roll=%d Name=%s Age=%d\n", students[idx].roll, students[idx].name, students[idx].age);
    else
        printf("Not found by name\n");

    return 0;
}


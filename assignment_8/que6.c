#include <stdio.h>

typedef struct {
    int roll;
    char name[50];
    int std;
    union {
        char grade;
        float percentage;
    } result;
} Student;

void accept_students(Student arr[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("Enter Roll, Name, Standard: ");
        scanf("%d %s %d", &arr[i].roll, arr[i].name, &arr[i].std);
        if (arr[i].std <= 4) {
            printf("Enter Grade (A/B/C): ");
            scanf(" %c", &arr[i].result.grade);
        } else {
            printf("Enter Percentage: ");
            scanf("%f", &arr[i].result.percentage);
        }
    }
}

void print_students(const Student arr[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("Roll: %d Name: %s Standard: %d ", arr[i].roll, arr[i].name, arr[i].std);
        if (arr[i].std <= 4)
            printf("Grade: %c\n", arr[i].result.grade);
        else
            printf("Percentage: %.2f\n", arr[i].result.percentage);
    }
}

int main()
{
    Student s[3];
    accept_students(s, 3);
    print_students(s, 3);
    return 0;
}


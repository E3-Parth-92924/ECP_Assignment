#include <stdio.h>

typedef struct {
    unsigned int roll;
    char name[50];
    unsigned int std : 4;     
    unsigned int gender : 1;  
    unsigned int age : 6;     
} Student;

void accept_students(Student arr[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("Enter Roll, Name, Standard(1-12), Gender(0=Male,1=Female), Age: ");
        scanf("%u %s %u %u %u",
              &arr[i].roll,
              arr[i].name,
              &arr[i].std,
              &arr[i].gender,
              &arr[i].age);
    }
}

void print_students(const Student arr[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("Roll: %u Name: %s Std: %u Gender: %s Age: %u\n",
               arr[i].roll,
               arr[i].name,
               arr[i].std,
               arr[i].gender ? "Female" : "Male",
               arr[i].age);
    }
}

int main()
{
    Student s[3];
    accept_students(s, 3);
    print_students(s, 3);
    return 0;
}


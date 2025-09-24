#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int roll;
    char name[50];
    int age;
} Student;

enum Menu {
    EXIT,
    WRITE,
    READ,
    SEARCH_ROLL,
    SEARCH_NAME,
    MODIFY,
    REMOVE_REC
};

void write_record()
{
    FILE *fp = fopen("student.dat", "ab");
    if (!fp) return;
    Student s;
    printf("Enter Roll, Name, Age: ");
    scanf("%d %s %d", &s.roll, s.name, &s.age);
    fwrite(&s, sizeof(Student), 1, fp);
    fclose(fp);
}

void read_records()
{
    FILE *fp = fopen("student.dat", "rb");
    if (!fp) return;
    Student s;
    while (fread(&s, sizeof(Student), 1, fp))
        printf("Roll: %d Name: %s Age: %d\n", s.roll, s.name, s.age);
    fclose(fp);
}

void search_roll()
{
    FILE *fp = fopen("student.dat", "rb");
    if (!fp) return;
    int roll;
    printf("Enter Roll: ");
    scanf("%d", &roll);
    Student s;
    int found = 0;
    while (fread(&s, sizeof(Student), 1, fp)) {
        if (s.roll == roll) {
            printf("Roll: %d Name: %s Age: %d\n", s.roll, s.name, s.age);
            found = 1;
            break;
        }
    }
    if (!found) printf("Record not found\n");
    fclose(fp);
}

void search_name()
{
    FILE *fp = fopen("student.dat", "rb");
    if (!fp) return;
    char name[50];
    printf("Enter Name: ");
    scanf("%s", name);
    Student s;
    int found = 0;
    while (fread(&s, sizeof(Student), 1, fp)) {
        if (strcmp(s.name, name) == 0) {
            printf("Roll: %d Name: %s Age: %d\n", s.roll, s.name, s.age);
            found = 1;
        }
    }
    if (!found) printf("Record not found\n");
    fclose(fp);
}

void modify_record()
{
    FILE *fp = fopen("student.dat", "rb+");
    if (!fp) return;
    int roll;
    printf("Enter Roll to Modify: ");
    scanf("%d", &roll);
    Student s;
    int found = 0;
    while (fread(&s, sizeof(Student), 1, fp)) {
        if (s.roll == roll) {
            printf("Enter New Roll, Name, Age: ");
            scanf("%d %s %d", &s.roll, s.name, &s.age);
            fseek(fp, -sizeof(Student), SEEK_CUR);
            fwrite(&s, sizeof(Student), 1, fp);
            found = 1;
            break;
        }
    }
    if (!found) printf("Record not found\n");
    fclose(fp);
}

void remove_record()
{
    FILE *fp = fopen("student.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");
    if (!fp || !temp) return;
    int roll;
    printf("Enter Roll to Remove: ");
    scanf("%d", &roll);
    Student s;
    int found = 0;
    while (fread(&s, sizeof(Student), 1, fp)) {
        if (s.roll == roll) {
            found = 1;
            continue;
        }
        fwrite(&s, sizeof(Student), 1, temp);
    }
    fclose(fp);
    fclose(temp);
    remove("student.dat");
    rename("temp.dat", "student.dat");
    if (!found) printf("Record not found\n");
}

int main()
{
    int choice;
    do {
        printf("\n0.Exit 1.Write 2.Read 3.SearchRoll 4.SearchName 5.Modify 6.Remove\n");
        scanf("%d", &choice);
        switch (choice) {
            case WRITE: write_record(); break;
            case READ: read_records(); break;
            case SEARCH_ROLL: search_roll(); break;
            case SEARCH_NAME: search_name(); break;
            case MODIFY: modify_record(); break;
            case REMOVE_REC: remove_record(); break;
            case EXIT: break;
            default: printf("Invalid Choice\n");
        }
    } while (choice != EXIT);
    return 0;
}


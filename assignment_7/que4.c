//Que4
#include <stdio.h>
#include <string.h>

void read_names(int n, int len, char names[n][len])
 {
    for (int i = 0; i < n; i++) {
        printf("Enter name %d: ", i+1);
        scanf("%s", names[i]);
    }
}

void print_names(int n, int len, char names[n][len])
 {
    for (int i = 0; i < n; i++)
        printf("%s\n", names[i]);
}

void sort_names(int n, int len, char names[n][len]) 
{
    char temp[len];
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) 
{
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main()
 {
    int n = 5, len = 50;
    char names[n][len];
    read_names(n, len, names);

    printf("\nNames:\n");
    print_names(n, len, names);

    sort_names(n, len, names);
    printf("\nSorted Names:\n");
    print_names(n, len, names);
    return 0;
}


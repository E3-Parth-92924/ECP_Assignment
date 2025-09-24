//Que5
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read_names(int n, int len, char *names[n])
 {
    for (int i = 0; i < n; i++) {
        names[i] = malloc(len);
        printf("Enter name %d: ", i+1);
        scanf("%s", names[i]);
    }
}

void print_names(int n, char *names[n])
 {
    for (int i = 0; i < n; i++)
        printf("%s\n", names[i]);
}

void sort_names(int n, char *names[n])
 {
    char *temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) 
{
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
}

void free_names(int n, char *names[n])
 {
    for (int i = 0; i < n; i++)
        free(names[i]);
}

int main() {
    int n = 5, len = 50;
    char *names[n];
    read_names(n, len, names);

    printf("\nNames:\n");
    print_names(n, names);

    sort_names(n, names);
    printf("\nSorted Names:\n");
    print_names(n, names);

    free_names(n, names);
    return 0;
}


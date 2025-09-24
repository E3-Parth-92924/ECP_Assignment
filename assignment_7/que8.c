//Que8
#include <stdio.h>
#include <string.h>

void sort(char *arr[], int n)
 {
    char *temp;
    for (int i = 0; i < n-1; i++)
 {
        for (int j = i+1; j < n; j++)
 {
            if (strcmp(arr[i], arr[j]) > 0)
 {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(int argc, char *argv[])
 {
    if (argc < 2) {
        printf("No names provided.\n");
        return 0;
    }

    sort(argv+1, argc-1);

    printf("Sorted Names:\n");
    for (int i = 1; i < argc; i++)
        printf("%s\n", argv[i]);
    return 0;
}


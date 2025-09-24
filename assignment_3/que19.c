#include <stdio.h>

int main(void) {
    int start, end;
    printf("Enter the range (start end): ");
    scanf("%d %d", &start, &end);
    for (int i = 1; i <= 10; i++) {
        for (int num = start; num <= end; num++) {
            printf("%-4d", num * i); 
        }
        printf("\n");
    }

    return 0;
}


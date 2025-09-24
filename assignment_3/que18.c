#include <stdio.h>

int main(void) {
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);

    printf("Table of %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}


#include <stdio.h>

int main(void) {
    int i, j, isPrime;

    printf("Prime numbers between 1 to 100:\n");

    for (i = 2; i <= 100; i++) {
        isPrime = 1; 
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}


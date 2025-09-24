#include <stdio.h>

int main(void) {
    int num, count = 0, isPrime;

    printf("Enter a number: ");
    scanf("%d", &num);

    int i = num + 1;   

    printf("First 5 prime numbers after %d are:\n", num);

    while (count < 5) {  
        isPrime = 1;      

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime && i > 1) {
            printf("%d ", i);
            count++;
        }

        i++;
    }

    printf("\n");
    return 0;
}


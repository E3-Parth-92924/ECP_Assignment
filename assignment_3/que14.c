#include<stdio.h>
int main() {
    int num, i;
    printf("Enter num: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime num \n", num);
        return 0;
    }

    for (i = 2; i <= num / 2; i++) {  
        if (num % i == 0) {
            break;
        }
    }

    if (i > num / 2) {
        printf("%d is a prime num \n", num);
    } else {
        printf("%d is not prime num \n", num);
    }

    return 0;
}


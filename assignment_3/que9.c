#include <stdio.h>

int main() {
    int no1, no2, rem;

    printf("Enter two numbers:\n");
    scanf("%d %d", &no1, &no2);

    int a = no1, b = no2;

    while (b != 0) {
        rem = a % b;
        printf("%d %% %d = %d\n", a, b, rem);
        a = b;
        b = rem;
    }

    printf("GCD of %d and %d is %d\n", no1, no2, a);

    return 0;
}


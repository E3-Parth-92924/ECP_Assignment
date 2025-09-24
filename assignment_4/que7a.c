#include <stdio.h>

int sum, product;

void calculate(int *a, int *b) {
    sum = (*a) + (*b);
    product = (*a) * (*b);
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    calculate(&x, &y);

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);

    return 0;
}


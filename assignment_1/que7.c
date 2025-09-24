#include <stdio.h>

int main() {
    int num, d1, d2, d3, d4;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    d1 = num / 1000;
    d2 = (num / 100) % 10;
    d3 = (num / 10) % 10;
    d4 = num % 10;


    printf("\na) Face value \n");
    printf("Face value of digits:");
    printf("%d %d %d %d\n", d1, d2, d3, d4);

    printf("\nb) Place value \n");
    printf("Place value of digits:");
    printf("%d = %d000 + %d00 + %d0 + %d\n", num, d1, d2, d3, d4);

    printf("\nc) Reverse number \n ");
    printf("Reverse number: %d%d%d%d\n", d4, d3, d2, d1);

    return 0;
}


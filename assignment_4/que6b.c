#include <stdio.h>

void printHex(int n) {
    if(n >= 16)
        printHex(n / 16);

    int rem = n % 16;
    if(rem < 10)
        printf("%d", rem);
    else
        printf("%c", rem - 10 + 'A');
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Hexadecimal of %d = ", num);
    printHex(num);
    printf("\n");
    return 0;
}


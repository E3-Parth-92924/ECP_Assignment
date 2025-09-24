#include <stdio.h>


int power(int base, int index) {
    int result = 1;
    for(int i = 1; i <= index; i++) {
        result = result * base;
    }
    return result;
}

int main() {
    int base, index;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter index: ");
    scanf("%d", &index);

    printf("%d ^ %d = %d\n", base, index, power(base, index));

    return 0;
}









































#include <stdio.h>
int fact(int num);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = fact(num);   
    printf("Fact of %d: %d\n", num, result);

    return 0;
}
int fact(int num) {
    int i, f = 1;
    for(i = 1; i <= num; i++) {
        f = f * i;
    }
    return f;
}


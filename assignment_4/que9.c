#include <stdio.h>

int calculator(int a, int b, char op, float *result) {
    switch(op) {
        case '+':
            *result = a + b;
            return 0;
        case '-':
            *result = a - b;
            return 0;
        case '*':
            *result = a * b;
            return 0;
        case '/':
            if(b == 0)
                return -1;   // error: divide by zero
            *result = (float)a / b;
            return 0;
        default:
            return -2;       // error: invalid operator
    }
}

int main() {
    int x, y;
    char op;
    float res;

    printf("Enter expression (e.g., 10 + 5): ");
    scanf("%d %c %d", &x, &op, &y);

    int status = calculator(x, y, op, &res);

    if(status == 0)
        printf("Result = %.2f\n", res);
    else if(status == -1)
        printf("Error: Division by zero\n");
    else
        printf("Error: Invalid operator\n");

    return 0;
}


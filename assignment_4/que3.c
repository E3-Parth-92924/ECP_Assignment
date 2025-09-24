#include <stdio.h>


float calculator(float a, float b, char op) {
    float result;
    switch(op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/': result = a / b; break;
        default : 
            printf("Invalid operator!\n");
            return 0;
    }
    return result;
}

int main() {
    float num1, num2;
    char op;
    
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Result = %.2f\n", calculator(num1, num2, op));

    return 0;
}


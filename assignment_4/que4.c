#include <stdio.h>

int errorflag=0;

float calculator(float a, float b, char op) {

    float result=0;
    errorflag=0;
    switch(op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/': 

                if(b==0)
                   { errorflag=1;
                    return 0;
                   }
                    result=a/b;
                    break;

        default : 

            printf("Invalid operator!\n");
            errorflag=1;
            return 0;
    }
    return result;
}

int main() {
    float num1, num2,res;
    char op;
    
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    res=calculator(num1,num2,op);

    if(errorflag)
    {
        if(op=='/' && num2==0)
            printf("Error div by zero");
         else
          printf("error occured");
        }
        else
        {
            printf("Result=%.2f",res);
            }

    return 0;
}


#include<stdio.h>
int main(){

    printf("Conversion of Fahrenheit to Celsius \n");
    float cel;
    float far;

    printf("Enter the temp in Fahrenheit : \n");
    scanf("%f",&far);

    cel = (5.0/9.0) * (far - 32);

    printf("Temp in Celsius : %.2f\n", cel);

    printf("Conversion of Celsius to Fahrenheit \n");
    printf("Enter the temp in Celsius : \n");
    scanf("%f",&cel);

    far = (9.0/5.0) * cel + 32;
    printf("Temp in Fahrenheit : %.2f\n", far);

    return 0;
}


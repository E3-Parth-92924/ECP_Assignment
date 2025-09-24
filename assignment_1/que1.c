#include<stdio.h>

int main(){

    printf("Signed int \n");
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    printf("sum of numbers is : %d \n", a+b);
    printf("difference of numbers is : %d \n",a-b);
    printf("product of numbers is : %d \n",a*b);
    printf("------------------------------------------------------------------------------------------------------------- \n");

    printf("Signed char \n");
    signed char ch1,ch2;
    printf("Enter two numbers : ");
    scanf("%hhd %hhd",&ch1,&ch2);
    printf("sum of numbers is : %d \n", ch1+ch2);
    printf("difference of numbers is : %d \n",ch1-ch2);
    printf("product of numbers is : %d \n",ch1*ch2);
    printf("-------------------------------------------------------------------------------------------------------------  \n");

    printf("Signed long \n");
    long e,f;
    printf("Enter two numbers : ");
    scanf("%ld %ld",&e,&f);
    printf("sum of numbers is : %ld \n", e+f);
    printf("difference of numbers is : %ld \n",e-f);
    printf("product of numbers is : %ld  \n",e*f);
    printf("-------------------------------------------------------------------------------------------------------------  \n");

    printf("Unsigned int \n");
    unsigned int g,h;
    printf("Enter two numbers : ");
    scanf("%u %u",&g,&h);
    printf("sum of numbers is : %u \n", g+h);
    printf("difference of numbers is : %u \n",g-h);
    printf("product of numbers is : %u \n",g*h);
    printf("------------------------------------------------------------------------------------------------------------- \n");

    printf("Unsigned char \n");
    unsigned char ch3,ch4;
    printf("Enter two numbers : ");
    scanf("%hhu %hhu",&ch3,&ch4);
    printf("sum of numbers is : %u \n", ch3+ch4);
    printf("difference of numbers is : %u \n",ch3-ch4);
    printf("product of numbers is : %u \n",ch3*ch4);
    printf("-------------------------------------------------------------------------------------------------------------  \n");

    printf("Unsigned long \n");
    unsigned long k,l;
    printf("Enter two numbers : ");
    scanf("%lu %lu",&k,&l);
    printf("sum of numbers is : %lu \n", k+l);
    printf("difference of numbers is : %lu \n",k-l);
    printf("product of numbers is : %lu  \n",k*l);
    printf("-------------------------------------------------------------------------------------------------------------  \n");

    return 0 ;
}


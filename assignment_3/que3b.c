#include<stdio.h>

    int main(){
    int num;
    printf("Enter num \n");
    scanf("%d",&num);
    int rev=0;
    int rem;

    while(num>0){
        rem=num%10;
        rev=rev*10 + rem;
        num=num/10;
    }
    printf("reverse num is: %d\n ",rev);
    
    return 0;
        }


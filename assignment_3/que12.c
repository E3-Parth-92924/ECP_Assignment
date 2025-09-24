#include<stdio.h>

int main(){

    int base,index;
    int pow=1;
    printf("enter base:");
    scanf("%d",&base);
    printf("enter index:");
    scanf("%d",&index);
    for(int i=1;i<=index;i++){

    pow = pow * base;
    }    
    printf("%d ^ %d = %d\n",base,index,pow);
      
    return 0;

    }

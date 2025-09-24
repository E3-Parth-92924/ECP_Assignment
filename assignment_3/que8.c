#include<stdio.h>

    int main(){
    int num;
    int i=2;
    int orig=num;
    printf("Enter num\n");
    scanf("%d",&num);
    while(num>1){
    if(num%i==0){
    num=num/i;
    printf("%d",i);
    if(num>1)
        printf(" * ");
        }
        else{
    i++;
            }

        }

    return 0;
        }

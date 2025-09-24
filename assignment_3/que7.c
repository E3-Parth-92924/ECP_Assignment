#include<stdio.h>

    int main(){
    int num,i=1;
    printf("Enter a num\n");
    scanf("%d",&num);
    printf("Unique factor pairs of%d\n",num);
    while(i<=num){
    if(num%i==0){
    int pair =num/i;
    if(i<=pair){
    printf("%d * %d = %d\n",i,pair,num);
        }
    }
    i++;
   }

    return 0;
        }

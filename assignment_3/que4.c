#include<stdio.h>
    int main(){
    int num;
    printf("Enter a num\n");
    scanf("%d",&num);
    int fact=1,i=1;
    while(i<=num){
    fact=fact*i;
    printf("%d",i);
    if(i<num){
    printf(" * ");
      }
      i++;
     }
    printf(" = %d\n",fact);
    return 0;
        }

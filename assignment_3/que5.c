#include<stdio.h>
    int main(){
    int num;
    printf("Enter a num\n");
    scanf("%d",&num);
    int fact=1;
    int i=num;
    while(i>=1){
    fact=fact*i;
    printf("%d",i);
    if(i>1){
    printf(" * ");
      }
      i--;
     }
    printf(" = %d\n",fact);
    return 0;
        }

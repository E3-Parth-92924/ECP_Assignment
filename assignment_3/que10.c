#include<stdio.h>

    int main(){
    int num;
    printf("Enter num :");
    scanf("%d",&num);
    int i=1;
    for(int i=1;i<=10;i++){

    printf("%d x %d = %d\n",num,i,num*i);
    }
  return 0;
   }

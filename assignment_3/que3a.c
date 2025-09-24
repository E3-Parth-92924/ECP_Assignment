#include<stdio.h>

int main(){

    int num;
    printf("Enter num \n");
    scanf("%d",&num);
    int original = num;
    int rev =0,sum=0;
    while(num>0)
    {
    rev=rev*10+(num%10);
    num=num/10;
    }
    while(rev>0){
        int d=rev%10;
        sum=sum+d;
    printf("%d",d);

    rev=rev/10;
    if(rev>0){
    printf(" + ");
        }
      }
        printf(" = %d\n",sum);

    return 0;
    }


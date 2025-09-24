#include<stdio.h>
int ones_count(int n)
{
    int count=0;
    while(n>0){
        if(n&1)
           { count++;

           }
        n=n>>1;
    }
    return count;
    }
int main()
{
    int num;
    printf("enter num");
    scanf("%d",&num);
    int noones= ones_count(num);
    printf("no of ones in %d is %d",num,noones);
    return 0;
    }

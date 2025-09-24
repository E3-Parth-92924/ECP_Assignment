#include<stdio.h>

void swap(int *n1,int *n2)
{
   
    *n1= *n1^ *n2;
    *n2= *n1^ *n2;
    *n1= *n1^ *n2;

    }

int main()
{
    int n1,n2;
    printf("Enter nums");
    scanf("%d%d",&n1,&n2);
    swap(&n1,&n2);
    printf("n1=%d,n2=%d",n1,n2);
    return 0;

    }

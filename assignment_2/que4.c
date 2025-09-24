#include<stdio.h>

//a)

int main(){

    int n1,n2;
    printf("Enter 2 nos n1: and n2 : \n");
    scanf("%d%d",&n1,&n2);

    if(n1>n2){

        printf("%d is max \n");

        }
    else{

        printf("%d is max \n");
        }

//b)
    int n3,n4;
    printf("Enter 2 nos :");
    scanf("%d%d",&n3,&n4);

    (n3>n4) ? printf("%d is max \n",n3) : printf("%d is max \n",n4);
 
    return 0;
    }

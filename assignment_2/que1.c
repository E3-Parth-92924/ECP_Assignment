#include<stdio.h>

int main(){





    int n1,n2;
    printf("Enter two numbers : \n");
    scanf("%d%d",&n1,&n2);

    if(n2 != 0){
            
            printf("Division is : %d \n ",n1 / n2);
        }
    else{


            printf("can't divide by by zero \n");

        }

    return 0;
    }

#include<stdio.h>


    typedef enum choice {ADD = 1,SUB,MUL,DIV}CHOICE;
    CHOICE s1;

int main(){
   
    int n1,n2;
    float res;
    printf("Enter 2 nos \n");
    scanf("%d%d",&n1,&n2);
    CHOICE s1;
    printf("Enter your choice \n");
    scanf("%d",(int*)&s1);

    switch (s1){


    case ADD : res = n1+n2;
        printf("res =%.2f \n",res);
        break;
    case SUB : res = n1-n2;
        printf("res =%.2f \n",res);
        break;
    case MUL : res = n1*n2;
        printf("res = %.2f \n ",res);
        break;
    case DIV : if(n2==0){


        printf("Cannot Div by zero \n");
        }
     else{
     res = n1/n2;
        printf("res = %.2f \n",res);
        break;
    }
    default : printf("Wrong Choice \n");
        break;

        }

    return 0;
    }

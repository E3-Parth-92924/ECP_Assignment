#include<stdio.h>

int main(){
    
//a)
    printf("Using if else \n");
    int n1,n2,n3;
    printf("Enter 3 nos n1: n2: n3:  \n");
    scanf("%d%d%d",&n1,&n2,&n3);

    if(n1>=n2 && n1>=n3){

        printf("n1(%d) is max \n",n1);
    

        }
    else if(n2>=n1 && n2>=n3){
    
        printf("n2(%d) is max \n",n2);

        }
    else{

        printf("n3(%d) is max \n",n3);

        }
//b)
        printf("Using ternary oprerator \n");
        int a,b,c;
        int max_value;
        printf("\nEnter 3 nos a: b: c:  \n");
        scanf("%d%d%d",&a,&b,&c);

       max_value = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
       printf("Max is = %d\n",max_value);

    return 0;
    }

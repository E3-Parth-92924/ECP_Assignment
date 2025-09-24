#include<stdio.h>

    int main(){
    int n;
    printf("Enter num of terms: ");
    scanf("%d",&n);
    int a=1,b=1,next;
    printf("Fibonacci Series: ");

    for(int i=1;i<=n;i++){
    if(i==1 || i==2){
        printf("%d ",1);
        }
    else{
    next=a+b;
    printf("%d ",next);
    a=b;
    b=next;
    }
  }

    printf("\n");
    return 0;
        }

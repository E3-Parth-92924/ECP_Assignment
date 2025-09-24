#include<stdio.h>

    int main(){
    int num,i=1;
    printf("Enter num \n");
    scanf("%d",&num);

    printf("all factors: ",num);
    while(i<num){
    if(num%i==0){
    printf("%d ",i);
        }
        i++;
         
    }
    return 0;
}

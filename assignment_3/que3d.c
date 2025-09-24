#include<stdio.h>

int main(){
    int num;
    printf("Enter num\n");
    scanf("%d",&num);
    int orig=num;
    int sum=0;
  
    while(num>0){
     
     int digit=num%10;
     num=num/10;
     sum=sum+(digit*digit*digit);
    }
     if(orig==sum){

    printf("%d is Arms",orig);
         }
    else{
    printf("%d is not a arms",orig);
        }
    return 0;
    }

#include<stdio.h>

int main(){

    printf("Enter 5 digit no \n");
    int d1,d2,d3,d4,d5;
    scanf("%d%d%d%d%d",&d1,&d2,&d3,&d4,&d5);

    int original = 10000*d1 + 1000*d2 + 100*d3 + 10*d4 + d5;
    int reverse  = 10000*d5 + 1000*d4 + 100*d3 + 10*d2 + d1;
    
    if( original == reverse ){

        printf("Num is Palindrome \n");

        }
     else{

        printf("Num is not a Palindrme \n");    

         }

    return 0;
    }

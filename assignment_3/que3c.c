#include<stdio.h>

    int main(){

    int num,orig,rev=0,rem;
    printf("Enter num\n");
    scanf("%d",&num);
    orig = num;

    while(num>0){
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
    }
    
    if(orig==rev){
    printf("%d is a numeric palinndrome\n",orig);

        }
    else{
    printf("%d is not a numeric palindrome\n",orig);
        }
    return 0;
        }

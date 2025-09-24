#include<stdio.h>

int main(){

    int n1;
    char ch;
    printf("Enter a no \n");
    scanf("%d",&n1);
    printf("Enter a char \n");
    scanf("%*c%c",&ch);
    for(int i=1;i<=n1;i++){
       
        printf("%c",ch);
        }
        printf("\n");

    return 0;
    }

#include<stdio.h>

int main(){
//a)
printf("* \n");

printf("** \n");

printf("*** \n");

printf("**** \n");

printf("***** \n ");


//b)
printf("* \n ** \n *** \n **** \n ***** \n");
//c)


for(int i=1;i<=6;i++)
{
 for(int j=1;j<i;j++){
 printf("*");
}

printf("\n");

}





return 0;
}

#include<stdio.h>


int main()
{

	int num;
    printf("Enter Num:");
    scanf("%d",&num);
    int  i;
	for(i = 1;i <= 10;i++)
	{
		printf("%d x %d = %d\n",num,i,num*i);
	}

	return 0;
}

#include<stdio.h>
void print_bin(int num)
/*{
    while(num>0)
    {   
        printf("%d",num%2);
        num=num/2;
        }
    }
*/
{
    if(num==0)
        return;
        print_bin(num/2);
        printf("%d",num%2);

    }
int main()
{
    int num;
    printf("enter num\n");
    scanf("%d",&num);
    print_bin(num);
    return 0;

    }

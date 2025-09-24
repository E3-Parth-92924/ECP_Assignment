#include<stdio.h>

void print_char(char ch,int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%c",ch);

        }
        printf("\n");
    }

int main()
{
    char ch;
    int n;
    printf("enter char");
    scanf("%c",&ch);
    printf("enter no");
    scanf("%d",&n);

    print_char(ch,n);
    return 0;
    }

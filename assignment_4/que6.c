#include<stdio.h>
void pascalTri(int n)
{
    for(int i=0;i<n;i++)
    {   
        for(int j=0;j<n-i-1;j++)
        {
            printf(" ");
            }
            int num=1;
            for(int j=0;j<=i;j++)
            {
                printf("%d ",num);
                num=num*(i-j)/(j+1);
                }
                printf("\n");
        }

    }

int main()
{
    int n;
    printf("enter no of rows");
    scanf("%d",&n);
    pascalTri(n);
    return 0;
    }

#include<stdio.h>
int alpha_bet(char ch)
{
    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122)) 
    {
        printf("it is alphabet");
        int res = ch^32;
        return res;
        }
    }

int main()
{
    char ch;
    int res;
    printf("Enter a char");
    scanf("%c",&ch);
    res=alpha_bet(ch);
    printf("result %c",res);
    return 0;
    }

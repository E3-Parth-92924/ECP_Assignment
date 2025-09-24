//Que5
#include <stdio.h>
#include <limits.h>
#include <ctype.h>

int my_atoi(const char *s)
{
    while (isspace((unsigned char)*s)) s++;
    int sign = 1;
    if (*s == '+' || *s == '-') { if (*s=='-') sign = -1; s++; }

    long long val = 0;
    while (*s >= '0' && *s <= '9') 
{
        val = val * 10 + (*s - '0');
        if (sign == 1 && val > INT_MAX) return INT_MAX;   
        if (sign == -1 && -val < INT_MIN) return INT_MIN; 
        s++;
    }
    return (int)(sign * val);
}

int main() 
{
    char s[256];
    printf("Enter numeric string: ");
    fgets(s, sizeof(s), stdin);
    for (int i=0; s[i]; i++) if (s[i]=='\n') s[i]='\0';
    printf("my_atoi = %d\n", my_atoi(s));
    return 0;
}


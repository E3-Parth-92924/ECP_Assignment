//Que3
#include <stdio.h>

void remove_char(char *s, char ch)
{
    int w = 0;
    for (int r = 0; s[r] != '\0'; r++) 
{
        if (s[r] != ch) s[w++] = s[r];
    }
    s[w] = '\0';
}

int main()
{
    char s[256];
    char ch;
    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);
    for (int i = 0; s[i]; i++) if (s[i]=='\n') s[i]='\0';
    printf("Enter char to remove: ");
    scanf(" %c", &ch);
    remove_char(s, ch);
    printf("Result: %s\n", s);
    return 0;
}


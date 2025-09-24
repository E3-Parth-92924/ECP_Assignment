//Que4
#include <stdio.h>

void strip_chars(const char *ban, char *s)
 {
    int seen[256] = {0};
    for (int i = 0; ban[i] != '\0'; i++)
        seen[(unsigned char)ban[i]] = 1;

    int w = 0;
    for (int r = 0; s[r] != '\0'; r++) 
{
        unsigned char c = (unsigned char)s[r];
        if (!seen[c]) s[w++] = s[r];
    }
    s[w] = '\0';
}

int main() 
{
    char ban[256], s[256];
    printf("Enter string1 (ban-set): ");
    fgets(ban, sizeof(ban), stdin);
    printf("Enter string2 (source): ");
    fgets(s, sizeof(s), stdin);
    for (int i=0; ban[i]; i++) if (ban[i]=='\n') ban[i]='\0';
    for (int i=0; s[i]; i++) if (s[i]=='\n') s[i]='\0';
    strip_chars(ban, s);
    printf("Result: %s\n", s);
    return 0;
}


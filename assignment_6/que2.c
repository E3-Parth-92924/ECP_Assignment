//Que2
#include <stdio.h>
#include <ctype.h>


size_t my_strlen(const char *s)
{
    size_t n = 0;
    while (s && s[n] != '\0') n++;
    return n;
}


char* my_strcpy(char *dest, const char *src)
{
    char *d = dest;
    while ((*d++ = *src++));
    return dest;
}


char* my_strcat(char *dest, const char *src)
{
    char *d = dest + my_strlen(dest);
    while ((*d++ = *src++));
    return dest;
}

int my_strcmp(const char *a, const char *b)
{
    while (*a && (*a == *b)) { a++; b++; }
    return (unsigned char)*a - (unsigned char)*b;
}

int my_stricmp(const char *a, const char *b)
{
    while (*a && *b) {
        int ca = tolower((unsigned char)*a);
        int cb = tolower((unsigned char)*b);
        if (ca != cb) return ca - cb;
        a++; b++;
    }
    return (unsigned char)tolower((unsigned char)*a) -
           (unsigned char)tolower((unsigned char)*b);
}


char* my_strrev(char *s)
{
    if (!s) return s;
    size_t i = 0, j = my_strlen(s);
    if (j == 0) return s;
    for (j--; i < j; i++, j--) {
        char t = s[i]; s[i] = s[j]; s[j] = t;
    }
    return s;
}


char* my_strchr(const char *s, int ch)
{
    char c = (char)ch;
    while (*s) {
        if (*s == c) return (char*)s;
        s++;
    }
    return (c == '\0') ? (char*)s : NULL;
}


char* my_strstr(const char *hay, const char *needle)
{
    if (!*needle) return (char*)hay;
    size_t n = my_strlen(needle);
    for (const char *p = hay; *p; p++)
  {
        size_t i = 0;
        while (i < n && p[i] == needle[i]) i++;
        if (i == n) return (char*)p;
    }
    return NULL;
}

int main() {
    char a[100] = "Hello";
    char b[100] = "World";
    char c[100];

    printf("my_strlen(\"Hello\") = %zu\n", my_strlen(a));
    my_strcpy(c, a);   printf("my_strcpy -> c = %s\n", c);
    my_strcat(a, " "); my_strcat(a, b); printf("my_strcat -> a = %s\n", a);
    printf("my_strcmp(\"abc\",\"abd\") = %d\n", my_strcmp("abc", "abd"));
    printf("my_stricmp(\"HeLLo\",\"hello\") = %d\n", my_stricmp("HeLLo","hello"));

    char rev[100] = "Sunbeam";
    printf("my_strrev(\"Sunbeam\") = %s\n", my_strrev(rev));

    const char *s = "This is a test";
    printf("my_strchr(\"%s\", 'a') -> %s\n", s, my_strchr(s,'a'));
    printf("my_strstr(\"%s\", \"is\") -> %s\n", s, my_strstr(s,"is"));
    return 0;
}


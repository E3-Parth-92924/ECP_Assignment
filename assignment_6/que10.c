//Que10
#include <stdio.h>


size_t my_strlen2(const char *s){ size_t n=0; while(s[n]) n++; return n; }
int my_strncmp2(const char *a, const char *b, size_t n)
{
    for (size_t i=0;i<n;i++){ if(a[i]!=b[i] || !a[i]) return (unsigned char)a[i] - (unsigned char)b[i]; }
    return 0;
}

int replace_all_manual(const char *src, const char *find, const char *repl, char *out, size_t outsz)
 {
    size_t fl = my_strlen2(find), rl = my_strlen2(repl);
    size_t used = 0;
    if (fl == 0) { // just copy
        for (size_t i=0; src[i] && used+1<outsz; i++, used++) out[used]=src[i];
        if (used < outsz) { out[used]='\0'; return 1; }
        return 0;
    }
    for (size_t i = 0; src[i]; ) {
        if (my_strncmp2(&src[i], find, fl) == 0) {
            if (used + rl + 1 > outsz) return 0;
            for (size_t k=0; k<rl; k++) out[used++] = repl[k];
            i += fl;
        } else {
            if (used + 1 >= outsz) return 0;
            out[used++] = src[i++];
        }
    }
    out[used] = '\0';
    return 1;
}

int main()
 {
    char src[256] = "This is test time";
    char find[64] = "is";
    char repl[64] = "was";
    char out[512];

    if (replace_all_manual(src, find, repl, out, sizeof(out)))
        printf("Output: %s\n", out);
    else
        printf("Buffer too small.\n");
    return 0;
}


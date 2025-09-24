//Que9
#include <stdio.h>
#include <string.h>

int replace_all_lib(const char *src, const char *find, const char *repl, char *out, size_t outsz)
 {
    size_t fl = strlen(find), rl = strlen(repl);
    const char *p = src;
    size_t used = 0;
    if (fl == 0)
 {
        strncpy(out, src, outsz-1); out[outsz-1]='\0'; return 1;
    }
    out[0] = '\0';
    while (*p)
 {
        const char *hit = strstr(p, find);
        size_t chunk = hit ? (size_t)(hit - p) : strlen(p);
        if (used + chunk + (hit ? rl : 0) + 1 > outsz) return 0;
        strncat(out, p, chunk); used += chunk;
        if (hit) { strcat(out, repl); used += rl; p = hit + fl; }
        else break;
    }
    return 1;
}

int main()
 {
    char src[256] = "This is test time";
    char find[64] = "is";
    char repl[64] = "was";
    char out[512];

    if (replace_all_lib(src, find, repl, out, sizeof(out)))
        printf("Output: %s\n", out);
    else
        printf("Buffer too small.\n");
    return 0;
}


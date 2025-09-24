//Que6
#include <stdio.h>

char* my_itoa(int value, char *str, int base)
 {
    if (base < 2 || base > 36) { str[0] = '\0'; return str; }
    unsigned int u = (value < 0 && base == 10) ? (unsigned)(-value) : (unsigned)value;
    char buf[40];
    int i = 0;
    do {
        unsigned int d = u % (unsigned)base;
        buf[i++] = (d < 10) ? ('0' + d) : ('A' + (d - 10));
        u /= (unsigned)base;
    } while (u);
    if (value < 0 && base == 10) buf[i++] = '-';
    // reverse into output
    int j = 0;
    while (i) str[j++] = buf[--i];
    str[j] = '\0';
    return str;
}

int main()
 {
    int n, base;
    char out[64];
    printf("Enter integer and base (2..36): ");
    if (scanf("%d %d", &n, &base) != 2) return 0;
    printf("my_itoa -> %s\n", my_itoa(n, out, base));
    return 0;
}


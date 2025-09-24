//Que7
#include <stdio.h>
#include <string.h>

typedef struct { int val; const char *sym; } Pair;
static const Pair tbl[] = {
    {1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},
    {100,"C"},{90,"XC"},{50,"L"},{40,"XL"},
    {10,"X"},{9,"IX"},{5,"V"},{4,"IV"},{1,"I"}
};

void int_to_roman(int n, char *out)
{
    if (n <= 0 || n > 3999) { out[0]='\0'; return; }
    int i = 0;
    for (size_t k = 0; k < sizeof(tbl)/sizeof(tbl[0]); k++)
 {
        while (n >= tbl[k].val) {
            out[i++] = tbl[k].sym[0];
            if (tbl[k].sym[1]) out[i++] = tbl[k].sym[1];
            n -= tbl[k].val;
        }
    }
    out[i] = '\0';
}

int roman_to_int(const char *s)
 {
    int total = 0;
    for (size_t k = 0; s[k];) {
        int matched = 0;
        for (size_t i = 0; i < sizeof(tbl)/sizeof(tbl[0]); i++)
 {
            size_t len = strlen(tbl[i].sym);
            if (strncmp(&s[k], tbl[i].sym, len) == 0) {
                total += tbl[i].val;
                k += len;
                matched = 1;
                break;
            }
        }
        if (!matched) return -1; // invalid
    }
    return total;
}

int main() 
{
    int n; char roman[32];
    printf("Enter number (1..3999): ");
    scanf("%d", &n);
    int_to_roman(n, roman);
    printf("Roman = %s\n", roman[0]?roman:"(invalid)");
    printf("Back to decimal = %d\n", roman_to_int(roman));
    return 0;
}


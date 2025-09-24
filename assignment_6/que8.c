//Que8
#include <stdio.h>
#include <string.h>

const char *ones[] = {"","one","two","three","four","five","six","seven","eight","nine",
"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
const char *tens[] = {"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

void three_digits_to_words(int n, char *out)
 {
    if (n >= 100) {
        sprintf(out + strlen(out), "%s hundred", ones[n/100]);
        if (n % 100) sprintf(out + strlen(out), " ");
    }
    n %= 100;
    if (n >= 20) {
        sprintf(out + strlen(out), "%s", tens[n/10]);
        if (n % 10) sprintf(out + strlen(out), " %s", ones[n%10]);
    } else if (n > 0) {
        sprintf(out + strlen(out), "%s", ones[n]);
    }
}

void number_to_words(int n, char *out) {
    if (n == 0) { strcpy(out, "zero"); return; }
    out[0] = '\0';
    if (n < 0) { strcpy(out, "minus "); n = -n; }

    int billions = n / 1000000000; n %= 1000000000; // (kept for completeness; input under a billion by prompt)
    int millions = n / 1000000;   n %= 1000000;
    int thousands = n / 1000;     n %= 1000;
    int rest = n;

    if (billions) { three_digits_to_words(billions, out); strcat(out," billion"); if (millions||thousands||rest) strcat(out," "); }
    if (millions) { three_digits_to_words(millions, out); strcat(out," million"); if (thousands||rest) strcat(out," "); }
    if (thousands){ three_digits_to_words(thousands,out); strcat(out," thousand"); if (rest) strcat(out," "); }
    if (rest)     { three_digits_to_words(rest, out); }
}

int main()
{
    int n; char out[256];
    printf("Enter number (|n| <= 2,147,483,647): ");
    scanf("%d", &n);
    number_to_words(n, out);
    printf("In words: %s\n", out);
    return 0;
}


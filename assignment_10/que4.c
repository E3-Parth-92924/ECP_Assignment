#include <stdio.h>

unsigned char make_even_parity(unsigned char byte)
{
    int count = 0;
    for (int i = 0; i < 7; i++) {
        if (byte & (1 << i))
            count++;
    }
    if (count % 2 != 0)
        byte |= 1 << 7;
    return byte;
}

int main()
{
    unsigned char b;
    scanf("%hhu", &b);
    unsigned char result = make_even_parity(b);
    printf("%u\n", result);
    return 0;
}


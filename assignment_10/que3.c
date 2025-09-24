#include <stdio.h>
#include <stdlib.h>

void print_bin(int num)
{
    if (num == 0)
        return;
    print_bin(num / 2);
    printf("%d", num % 2);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
        return 1;
    int num = atoi(argv[1]);
    if (num == 0) {
        printf("0\n");
        return 0;
    }
    print_bin(num);
    printf("\n");
    return 0;
}


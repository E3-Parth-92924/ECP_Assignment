#include <stdio.h>
#include <limits.h>

int main() {
    printf("___________________________________________________________________________________________ \n");

    printf("%-15s %-5s %-20s %-25s\n", "DataType", "Size", "FormatSpecifier", "Range");

    printf("___________________________________________________________________________________________ \n");

    printf("%-15s %-5ld %-20s %d to %d\n", "char", (long)sizeof(char), "%c", CHAR_MIN, CHAR_MAX);
    printf("%-15s %-5ld %-20s %d to %u\n", "unsigned char", (long)sizeof(unsigned char), "%c", 0, UCHAR_MAX);
    printf("%-15s %-5ld %-20s %d to %d\n", "short int", (long)sizeof(short), "%hd", SHRT_MIN, SHRT_MAX);
    printf("%-15s %-5ld %-20s %d to %u\n", "unsigned short", (long)sizeof(unsigned short), "%hu", 0, USHRT_MAX);
    printf("%-15s %-5ld %-20s %d to %d\n", "int", (long)sizeof(int), "%d", INT_MIN, INT_MAX);
    printf("%-15s %-5ld %-20s %u to %u\n", "unsigned int", (long)sizeof(unsigned int), "%u", 0, UINT_MAX);
    printf("%-15s %-5ld %-20s %ld to %ld\n", "long int", (long)sizeof(long), "%ld", LONG_MIN, LONG_MAX);
    printf("%-15s %-5ld %-20s %lu to %lu\n", "unsigned long", (long)sizeof(unsigned long), "%lu", 0UL, ULONG_MAX);

    printf("____________________________________________________________________________________________ \n");
    return 0;
}


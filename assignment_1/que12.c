#include <stdio.h>
#include <limits.h>
#include<float.h>
int main() {

    printf("Integer: \n");
    printf("___________________________________________________________________________________________ \n");

    printf("%-15s %-5s %-20s %-27s\n", "DataType", "Size", "FormatSpecifier", "Range");

    printf("___________________________________________________________________________________________ \n");

    printf("%-15s %-5ld %-23s %d to %d\n", "char", (long)sizeof(char), "%c", CHAR_MIN, CHAR_MAX);
    printf("%-15s %-5ld %-23s %d to %u\n", "unsigned char", (long)sizeof(unsigned char), "%c", 0, UCHAR_MAX);
    printf("%-15s %-5ld %-23s %d to %d\n", "short int", (long)sizeof(short), "%hd", SHRT_MIN, SHRT_MAX);
    printf("%-15s %-5ld %-23s %d to %u\n", "unsigned short", (long)sizeof(unsigned short), "%hu", 0, USHRT_MAX);
    printf("%-15s %-5ld %-23s %d to %d\n", "int", (long)sizeof(int), "%d", INT_MIN, INT_MAX);
    printf("%-15s %-5ld %-23s %u to %u\n", "unsigned int", (long)sizeof(unsigned int), "%u", 0, UINT_MAX);
    printf("%-15s %-5ld %-23s %ld to %ld\n", "long int", (long)sizeof(long), "%ld", LONG_MIN, LONG_MAX);
    printf("%-15s %-5ld %-23s %lu to %lu\n", "unsigned long", (long)sizeof(unsigned long), "%lu", 0UL, ULONG_MAX);

    printf("____________________________________________________________________________________________ \n");


    printf("Float : \n");

    printf("___________________________________________________________________________________________ \n");

    printf("%-15s %-5s %-20s %-27s\n", "DataType", "Size", "FormatSpecifier", "Range");

    printf("___________________________________________________________________________________________ \n");


    printf("%-15s %-5ld %-23s %e to %e\n", "float", (long)sizeof(float), "%f / %e / %g / %E", FLT_MIN, FLT_MAX);
    printf("%-15s %-5ld %-23s %e to %e\n", "double", (long)sizeof(double), "%lf / %e / %g / %E", DBL_MIN, DBL_MAX);
    printf("%-15s %-5ld %-23s %Le to %Le\n", "long double", (long)sizeof(long double), "%Lf / %Le / %Lg / %LE", LDBL_MIN, LDBL_MAX);
    

    printf("___________________________________________________________________________________________ \n");

    return 0;
}


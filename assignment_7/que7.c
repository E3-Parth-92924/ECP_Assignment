//Que7
#include <stdio.h>

int main(int argc, char *argv[])
 {
    if (argc < 2) {
        printf("No names provided.\n");
        return 0;
    }
    printf("Names:\n");
    for (int i = 1; i < argc; i++)
        printf("%s\n", argv[i]);
    return 0;
}


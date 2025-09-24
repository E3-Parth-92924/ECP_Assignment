#include <stdio.h>

int main() {
    int i, j;
    char ch;

    for(i = 0; i < 4; i++) {           
        ch = 'A' + i;                     
        for(j = i; j < 4; j++) {         
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}


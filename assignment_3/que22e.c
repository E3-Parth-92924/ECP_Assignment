#include <stdio.h>

int main() {
    int n = 7; 
    int i, j;

    
    for(i = n; i >= 1; i--) {
     
        for(j = 1; j < i; j++) {
            printf("  ");
        }
       
        for(j = i; j <= n; j++) {
            printf("%c ", j + 64); 
        }
        
        for(j = n - 1; j >= i; j--) {
            printf("%c ", j + 64);
        }
        printf("\n");
    }

    
    for(i = 2; i <= n; i++) {
        
        for(j = 1; j < i; j++) {
            printf("  ");
        }
        
        for(j = i; j <= n; j++) {
            printf("%c ", j + 64);
        }
        
        for(j = n - 1; j >= i; j--) {
            printf("%c ", j + 64);
        }
        printf("\n");
    }

    return 0;
}


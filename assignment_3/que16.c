#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int magic, guess, chances = 10;
    srand(time(0));
    magic = rand() % 1000 + 1;
    printf("Guess the magic number between 1 and 1000!\n");
    do {
        printf("Enter your guess (Chances left %d): ", chances);
        scanf("%d", &guess);
        if (guess == magic) {
            printf("Congrats! You won.\n");
            break;  
        } else if (guess < magic) {
            printf("** left **\n");
        } else {
            printf("** right **\n");
        }
        chances--;  
    } while (chances > 0);
    if (chances == 0 && guess != magic) {
        printf("You lost. The magic number= %d\n", magic);
    }

    return 0;
}


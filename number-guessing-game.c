#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
    int number, guess, guesses = 0;
    srand(time(0));
    number = rand() % 100 + 1; // Generates a random number between 1 and 100
    printf("Guess the number between 1 and 100\n");
    do {
        scanf("%d", &guess);
        if (guess == number) {
            printf("****************\n");
            printf("Congratulations! You guessed it right. 🎉\n");
            printf("Guesses: %d  Number: %d Score:  \033[0;32m %d \033[0m   \n", guesses , number, 14/guesses);
            printf("****************\n");
        } else if (guess > number) {
            guesses++;
            printf("Lower number please! 📉\n");
        } else {
            guesses++;
            printf("Higher number please! 📈\n");
        }
    } while(number != guess);

    return 0;
}
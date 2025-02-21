#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // psudo-random number generator = A set of algorithms that generate a sequence of numbers that meet certain statistical requirements for randomness
    srand(time(0)); // seed the random number generator
    int number1 = rand(); // generate a random number between 0 and RAND_MAX
    int number2 = rand() % 100; // generate a random number between 0 and 99
    printf("Random number 1: %d\n", number1);
    printf("Random number 2: %d\n", number2);
    return 0;
}
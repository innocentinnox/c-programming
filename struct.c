#include <string.h>;
#include <stdio.h>;

struct Player {
    char name[20];
    int score;
};



int main(){
    // Struct are used to define a custom data type
    // It is a collection of variables of different data types
    // It is used to store and manipulate data in a program
    // Similar to class in OOP but no methods

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "John");
    player1.score = 67;

    strcpy(player2.name, "Weng");
    player2.score = 89;

    printf("%s", player1.name);
    // printf("%s \n - %d \n", player2.name, player2.score);
    
    return 0;
}
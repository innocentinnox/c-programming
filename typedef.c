#include <stdio.h>

// typedef char user[25];

// struct User {
//     char name[25];
//     int age;
// };

// typedef = reserved keyword that gives an existing datatype a nickname
// similar to type in typescript

typedef struct  {
    char name[25];
    int age;
} User;

int main(){
    User user1 = { "Innocent", 22 };
    printf("%s %d\n", user1.name, user1.age);
    return 0;

}
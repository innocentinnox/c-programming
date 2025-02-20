#include <stdio.h>
#include <string.h>

int main(){
    char name[25] = ""; // Initialize with an empty string
    // printf("%lu ", strlen(name)); // Correct format
    while(strlen(name) == 0 || name[0] == '\n'){
        printf("Enter your name: ");
        fgets(name, 25, stdin);
    }
    printf("Hello %s", name);

    return 0;
}
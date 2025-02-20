#include <stdio.h>
#include <string.h>

int main() {
    char name[25]; 

    do {
        printf("Enter your name: ");
        fgets(name, 25, stdin);
    } while (strlen(name) <= 1); // Handle empty input (only '\n' is 1 char)

    printf("Hello %s", name);
    
    return 0;
}

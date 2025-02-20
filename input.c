#include <stdio.h>
int main(){
    int dob;
    char name[25];
    printf("What's your name?\n");
    // scanf("%s", name); - will read up to the first whitespace
    fgets(name, 25, stdin);
    printf("What's your DOB?\n");
    scanf("%d", &dob);
    printf("Hello, %s!, you are %d years old.\n", name, 2025-dob);
    return 0;
}
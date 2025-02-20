#include <stdio.h>

int main(){
    char grade[1];
    printf("Enter your grade (A,B,....D): ");
    scanf("%s", grade);

    switch(grade[0]){
        case 'A':
        printf("You got A grade");
        break;
        case 'B':
        printf("You got B grade");
        break;
        case 'C':
        printf("You got C grade");
        break;
        case 'D':
        printf("You got D grade");
        default:
        printf("Invalid grade");
    }
    return 0;
}
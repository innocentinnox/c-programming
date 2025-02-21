#include <stdio.h>
// Enum is a user-defined data type that consists of integral constants. It is used to assign names to the integral constants which makes a program easy to read and maintain.
// The keyword “enum” is used to declare an enumeration. It is a type of integer data type.
enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
int main(){
    enum week today;
    today = Saturday;
    printf("Day %d\n", today);
    
    if(today == Saturday){
        printf("Today is church day!\n");
    } else {
        printf("I have to work! \n");
    }

    return 0;
}
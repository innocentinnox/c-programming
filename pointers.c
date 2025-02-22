#include <stdio.h>

int main() {
    // A pointer is a variable that stores the memory address of another variable
    // A variable-like reference to a memory address

    // * is the dereference/indirection operator - it is used to access the value at the address stored in the pointer 
    // & is the address-of operator - it is used to get the address of a variable
    int age = 22;
    
    printf("Value: %d, Address of age: %p\n", age, &age);
    
    int *pAge = &age;
    printf("pAge: %p\n", pAge);

    printf("Value at pAge: %d\n", *pAge); // dereferencing
    return 0;
}
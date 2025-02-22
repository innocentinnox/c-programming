#include <stdio.h>

int main() {
    char a = 'X';
    char b = 'Y';
    char c = 'Z';

    short s = 'A'; // Uses 2 bytes of memory and take 2 memory blocks

    // printf("%d Bytes\n", sizeof(a));
    // printf("%d Bytes\n", sizeof(b));
    // printf("%d Bytes\n", sizeof(c));
    // printf("%d Bytes\n", sizeof(s));

    // printf("Address of a: %p\n", &a);
    // printf("Address of b: %p\n", &b);
    // printf("Address of c: %p\n", &c);
    // printf("Address of s: %p\n", &s);


    char A;
    char B[3];

    printf("Address of A: %p Size: %d \n", &a, sizeof(A));
    printf("Address of B: %p Size: %d \n", &b, sizeof(B));
    return 0;
}
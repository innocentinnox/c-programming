#include <stdio.h>

int main() {
    int num = 42;
    unsigned int uNum = 100;
    float pi = 3.14159;
    double bigPi = 3.1415926535;
    char letter = 'A';
    char str[] = "Hello, C!";
    void *ptr = &num;

    printf("Integer (decimal): %d\n", num);
    printf("Unsigned integer: %u\n", uNum);
    printf("Floating-point: %f\n", pi);
    printf("Double: %lf\n", bigPi);
    printf("Scientific notation: %e\n", pi);
    printf("Character: %c\n", letter);
    printf("String: %s\n", str);
    printf("Hexadecimal: %x\n", num);
    printf("Octal: %o\n", num);
    printf("Pointer address: %p\n", ptr);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[] = " World";

    // String length
    printf("Length of str1: %lu\n", strlen(str1));

    // String concatenation
    strcat(str1, str2);
    printf("After strcat: %s\n", str1);

    // String copy
    char copy[20];
    strcpy(copy, str1);
    printf("Copied string: %s\n", copy);

    // String comparison
    if (strcmp(str1, copy) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are different\n");
    }

    return 0;
}

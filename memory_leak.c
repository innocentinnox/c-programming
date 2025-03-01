#include <stdio.h>
#include <stdlib.h>

/**
 * A memory leak in C occurs when a program allocates memory dynamically using malloc() (or similar functions) 
 * but fails to free it using free(), leading to unused memory that the program can no longer access.
 * 
 * 🚨 How a Memory Leak Happens
 * When you allocate memory dynamically:
 * int *ptr = (int*) malloc(sizeof(int)); // Allocates memory for an int
 * 
 * If you forget to free it: free(ptr);
 * 
 * Then the memory remains allocated even after it's no longer needed.
 * This causes a memory leak because the program cannot reuse or release the memory.
 * 
 */

void createLeak() {
    int *ptr = (int*) malloc(sizeof(int)*5); // Allocates memory
    *ptr = 42;
    // Memory is never freed
    // Forgot: free(ptr);
}

int main() {
    while(1) {  // Infinite loop keeps calling createLeak()
        createLeak();
    }
    return 0;
}

/*
* 🛠️ How to Prevent Memory Leaks
* ✅ Always Free Memory

int *ptr = (int*) malloc(sizeof(int));
*ptr = 42;
free(ptr);  // Releases memory

* ✅ Set Pointer to NULL After Freeing

free(ptr);
ptr = NULL;  // Avoids dangling pointers

*/ 

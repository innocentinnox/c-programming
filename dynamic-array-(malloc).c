#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory using malloc()
    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // print the elements
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    // Free the dynamically allocated memory
    free(arr);
    return 0;
}
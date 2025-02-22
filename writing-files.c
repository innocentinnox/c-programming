#include <stdio.h>

int main(){
    FILE *pF = fopen("file.txt", "w");
    fprintf(pF, "Howdy!\n");
    printf("Address of pF: %p\n", pF);
    fclose(pF);
}
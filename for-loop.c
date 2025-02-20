#include <stdio.h>

int main(){
    for (int i = 1; i < 10; i++) {
        if(i == 5){ continue; } // skip 5
        printf("%d\n", i);
        if(i == 8){ break; } // Exit loop
    }
    return 0;
}
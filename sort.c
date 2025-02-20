#include <stdio.h>

int main(){

    int muns[] = {2,5,7,3,2,0};
    int n = sizeof(muns)/sizeof(muns[0]);
    //  Bubble short
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (muns[j] > muns[j + 1]) {
                int temp = muns[j];
                muns[j] = muns[j + 1];
                muns[j + 1] = temp;
                }
        }
    }

    // print the array
    for (int i = 0; i < n; i++) {
        printf("%d ", muns[i]);
    }
    return 0;
}
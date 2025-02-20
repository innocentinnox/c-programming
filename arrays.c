#include <stdio.h>
#include <string.h>

int main(){
    double prices[] = {1000, 2000, 3000, 4000, 5000};
    char name[] = "Bro"; //     A string is an array of chars
    
    
    // printf("%.2lf", prices[0]);
    prices[4] = 7000;
    // printf("%.2lf", prices[4]);
    // int n = sizeof(prices) / sizeof(prices[0]); // get length of array
    // for (int i = 0; i < n; i++) {
    //     printf("%.lf \n", prices[i]);
    // }

    // 2D Arrays
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    // printf("%d", matrix[0][0]);

    // Array of strings
    char names[][10] = {"John", "Jane", "Bob"};
    // name[0] = "Innocent"; // Not possible
    // printf("%s", names[0]); // prints "John" 
    int len = sizeof(name)/sizeof(names[0]);
    // print the array with for loop
    for (int i = 0; i < len; i++) {
        printf("%s\n", names[i]);
        }

}
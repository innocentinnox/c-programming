#include <stdio.h>

double square(double x){
    return x*x;
}

// function prototypes
void details(char name[], int age);

int main() {
    char name[] = "Innocent";
    int age = 22;
    details(name, age);

    printf("5^2 is: %.2lf", square(5));
    return 0;
}

void details(char name[], int age){
    printf("You are %d yeas old %s", age, name);
}
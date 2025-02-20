#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
    float temp;
    char units;
    printf("Enter temperature in Celsius or Fareaheight: ");
    scanf("%f", &temp);
    printf("Enter Units (C or F): ");
    scanf("%s", &units);

    switch(tolower(units)){
        case 'c' :
        printf("%.2f C is equal to %.2f F", temp, ((9/5*temp) + 32));
        break;      
        case 'f':
        printf("%.2f F is equal to %.2f C", temp, (9/5*(temp - 32)) );
        break;      
        default:
        printf("Invalid units");
    }
    return 0;
}
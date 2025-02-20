#include <stdio.h>
#include <math.h>

int main(){
    const float PI = 3.14159;
    int radius;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    double circumference = PI * 2 * radius;

    printf("The circumference of the circle is: %.2f\n", circumference);
    return 0;
}
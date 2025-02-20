#include <stdio.h>

int main() {
  // float pi = 3.14159265358979323846;
  // printf("%f", pi);

  int x = 3;
  int y = 10;
  double z = x / (double)y; // Cast x to double for floating-point division
  printf("%f", z); // Use %f to print a double
  return 0;
}
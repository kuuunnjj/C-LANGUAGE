// 61. Write a C program that accepts a real number x and prints out the corresponding value of sin(1/x) using 4-decimal places.
// Input value of x: .6235
// Value of sin(1/x) is 0.9995

#include <stdio.h> 
#include <math.h>

int main() {
    double x, y;

    printf("Input value of x: ");
    scanf("%lf", &x);

    if (x != 0.0) {
        y = sin(1/x);
        printf("Value of sin(1/x) is %0.4lf\n", y);
    } else {
        printf("Value of x should not be zero.");
    }

    return 0;
}

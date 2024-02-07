// 54. Write a C program that accepts a distance in centimeters and prints the corresponding value in inches.
// Test Data:
// Input Data: 500cms
// Input the distance in cm:
// Distance of 500.00 cms is = 196.85 inches

#include <stdio.h>

int main(){
    float inch,value;
  

    printf("Enter value : ");
    scanf("%f",&value);
     inch = (value*0.393701);

    printf("INCHES : %.2f inches",inch);
}
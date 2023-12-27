// Q.1 Write a Program to convert temperature from degrees Celsius to Fahrenheit.

#include <stdio.h>

int main(){
    float F;
    int C;

    printf("Input Celcius : ");
    scanf("%d",&C);

    F = (C*9/5) + 32;

    printf("The temperature in Fahrenheit is : %.1f",F);
}
// Q.1 Write a Program to check whether a number is even or odd using the ternary operator.
// For example :
// Input:
// Enter any number: 12

// Output: 
// This number is Even.

#include <stdio.h>

int main(){

    int a;

    printf("Enter your value :");
    scanf("%d",&a);


    (a%2 == 0) ? printf("Number is EVEN") : printf("Number is ODD");


}
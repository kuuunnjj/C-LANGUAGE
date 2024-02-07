// // Q.2 Write a Program to find the maximum number from the given 2 numbers using if else.
// For example,
// Input:
// Enter a value of the first number: 8
// Enter a value of the second number: 3

// Output:
// The minimum value is: 8

#include <stdio.h>

int main(){
    int a,b;

    printf("First value :");
    scanf("%d",&a);

    printf("Second value :");
    scanf("%d",&b);

    if (a>b)
    {
        printf("Maximum value : %d",a);
    }
    else{
        printf("Maximum value : %d",b);
    }
    
}


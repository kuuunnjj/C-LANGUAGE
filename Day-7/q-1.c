// Q.1 Write a Program to find the minimum number from the given 2 numbers using if else.
// For example,
// Input:
// Enter a value of the first number: 8
// Enter a value of the second number: 3

// Output:
// The minimum value is: 3

#include <stdio.h>

int main(){
    int a,b;

    printf("First value :");
    scanf("%d",&a);

    printf("Second value :");
    scanf("%d",&b);

    if (a<b)
    {
        printf("Minimum value : %d",a);
    }
    else{
        printf("Minimum value : %d",b);
    }
    
}

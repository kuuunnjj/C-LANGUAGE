// 9. Write a C program that accepts two integers from the user and calculates the sum of the two integers.
// Test Data :
// Input the first integer: 25
// Input the second integer: 38
// Expected Output:
// Sum of the above two integers = 63

#include <stdio.h>

int main(){
    int a,b;

    printf("First value :");
    scanf("%d",&a);

    printf("Second value :");
    scanf("%d",&b);

    printf("Sum is : %d", a+b);
}
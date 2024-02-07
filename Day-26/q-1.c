// **Question 1:**
// Write a C program to define a TSRN function named `addNumbers()`
//  that takes two integers as input and calculates their sum. Print the result inside 
//  the function. Call this function from the `main()` function and display the sum of 
//  two numbers.

#include <stdio.h>
void addition(int n1,int n2){
    printf("SUM IS : %d", n1 + n2);
}
void main(){

    int a,b;
    printf("ENTER 1ST VALUE : ");
    scanf("%d",&a);
    printf("ENTER 2ND VALUE : ");
    scanf("%d",&b);
    addition(a,b);
}
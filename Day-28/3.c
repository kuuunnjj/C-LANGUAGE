// **Question 3:**Write a C program to find the factorial of a given positive integer using a user-defined function. The program should prompt the user to enter a positive integer and then calculate its factorial using a function called calculateFactorial().Display the calculated factorial in the main function.


#include <stdio.h>

calculateFactorial(int f){

    return(f);

}

int main(){
    
    int value;

    printf("ENTER ANY VALUE : ");
    scanf("%d",&value);

    int f = 1;

    for (int i = value; i >= 1; i--)
    {
       f*=i;
    }

    calculateFactorial(f);
    printf("FACTORIAL : %d",calculateFactorial(f));

}
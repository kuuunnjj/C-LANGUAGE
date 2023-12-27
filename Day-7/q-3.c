// Q.3 Write a Program to find if a given number is neutral or not using a ladder if else.

// For example,
// Input:
// Enter any number: -9

// Output:
// This number is Negative
// -----------------------------------------------
// For example,
// Input:
// Enter any number: 0

// Output:
// This number is Neutral
// -----------------------------------------------

// For example,
// Input:
// Enter any number: 7

// Output:
// This number is Positive


#include <stdio.h>

int main(){
    int a;

    printf("Value :");
    scanf("%d",&a);


    if (a<0)
    {
       printf("This number is Negative");
    }
    else if (a==0)
    {
        printf("This number is Neutral");
    }
    else{
        printf("This number is Positive");
    }
    
    
}
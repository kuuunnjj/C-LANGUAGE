// Q.6 Write a Program to find leap years between two given numbers and store them in an array. And then print that array.
// For example,
// Input:
// Enter the first number: 2020

// Enter the second number: 2040

// Output:
// The array is: 2020, 2024, 2028, 2032, 2036, 2040

#include <stdio.h>

int main(){

    int maxsize = 100;
    int A[maxsize],B[maxsize],C[maxsize];

    printf("ENTER 1ST : ");
    scanf("%d",&A[maxsize]);

    printf("ENTER 2ND : ");
    scanf("%d",&B[maxsize]);

    C[maxsize] = A[maxsize];

    for (int i = A[maxsize]; i <= B[maxsize]; i++)
    {
        printf("%d \n",C[i]);
    }
    

}
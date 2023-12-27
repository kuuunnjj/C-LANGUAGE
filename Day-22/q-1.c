// Q.1 Write a Program to find all the negative elements from a given 1D array.
// For example,
// Input:
// Enter the array's size: 5

// Enter array's elements:
// a[0] = 2
// a[1] = -4
// a[2] = 1
// a[3] = -3
// a[4] = -5

// Output:
// Negative elements from an Array: -4, -3, -5

#include <stdio.h>

int main(){

    int maxsize = 100;
    int box[maxsize];
    int input;

    printf("Enter the array's size : ");
    scanf("%d",&input);
    maxsize = input;

    for (int i = 0; i < input; i++)
    {
        printf("ENTER : ");
        scanf("%d",&box[i]);
    }

    for (int i = 0; i < input; i++)
    {
        if (box[i] < 0)
        {
            printf("Negative elements from an Array : %d \n",box[i]);
        }
    }
    
}
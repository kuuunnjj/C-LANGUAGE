// Q.2 Write a Program to find all the negative elements from a given 1D array.
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
    int maxsize = 5;
    int box[maxsize];

    for(int i = 0; i < maxsize; i++){
        printf("a[%d] ==> ",i);
        scanf("%d", &box[i]);
    }
    for(int i = 0; i < maxsize; i++){
        if (box[i] < 0)
        {
            printf("Negative element from an Array ==> %d \n", box[i]);
        }
        
    }
}
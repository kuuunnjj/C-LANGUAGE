// Q.7 Write a Program to find square of each element from the given array.
// For example,
// Input:
// Enter array size: 5

// Enter array elements:
// a[0] = 7
// a[1] = 4
// a[2] = 9
// a[3] = 5
// a[4] = 2


// Output:
// The squares are: 49, 16, 81, 25, 4


// 4. **Double all elements in an array.**
// - Write a program to double element present in an array of integers.


#include <stdio.h>

int main(){
    int box[4];

    for (int i = 0; i <= 3; i++)
    {
        printf("ENTER VALUE : ");
        scanf("%d",&box[i]);
    }

    for (int i = 0; i <= 3; i++)
    {
        printf("REVERSE : %d \n",box[i]*box[i]);
    }


}

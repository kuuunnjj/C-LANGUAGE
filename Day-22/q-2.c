// Q.2 Write a Program to find the largest element from a given 2D array.
// For example,
// Input:
// Enter the array's row size: 3
// Enter the array's column size: 3

// Enter array's elements:
// a[0][0] = 2
// a[0][1] = 7
// a[0][2] = 1
// a[1][0] = 3
// a[1][1] = 5
// a[1][2] = 4
// a[2][0] = 8
// a[2][1] = 9
// a[2][2] = 6

// Output:
// The largest element is: 9

#include <stdio.h>

int main(){

    int rsize,csize,sum = 0;

    printf("ROW SIZE : ");
    scanf("%d",&rsize);

    printf("COLUMN SIZE : ");
    scanf("%d",&csize);

    int box[rsize][csize];

    for (int row = 0; row < rsize; row++)
    {
        for (int col = 0; col < csize; col++)
        {
            printf("ENTER : ");
            scanf("%d",&box[row][col]);
        }
        
    }

    for (int row = 0; row < rsize; row++)
    {
        for (int col = 0; col < csize; col++)
        {
            if (sum < box[row][col])
            {
                sum = box[row][col];
            }
            
            
        }
        
    }
    printf("MAX IS : %d",sum);

}
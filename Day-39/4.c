// Q.4 Write a Program to find the transpose matrix of a given 2D array.
// For example,
// Input:
// Enter the array's row & column size: 3

// Enter array's elements:
// a[0][0] = 2
// a[0][1] = 4
// a[0][2] = 1
// a[1][0] = 3
// a[1][1] = 5
// a[1][2] = 4
// a[2][0] = 8
// a[2][1] = 2
// a[2][2] = 6

// Output:
// The transpose matrix of an array:
// 2 3 8
// 4 5 2
// 1 4 6

#include <stdio.h>

int main()
{
    int rows, cols;

    printf("Enter the array's row size ==> ");
    scanf("%d", &rows);
    printf("Enter the array's column size ==> ");
    scanf("%d", &cols);

    int box[rows][cols];

    for (int row = 0; row < rows; row++)
    {

        for (int col = 0; col < cols; col++)
        {
            printf("a[%d][%d] ==> ", row, col);
            scanf("%d", &box[row][col]);
        }
    }

    printf("--------------------------------------------------------\n");

    for (int row = 0; row < rows; row++)
    {

        for (int col = 0; col < cols; col++)
        {
            printf("a[%d][%d] ==> %d  ", row, col, box[col][row]);
        }
        printf("\n");
    }
}
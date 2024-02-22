// Q.5 Write a Program to print and find the sum of all elements of a given row & column from a 2D array.
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
// Enter row number: 0
// Elements of row 0: 2, 7, 1
// The sum of a row 0: 10

// Enter column number: 2
// Elements of column 2: 1, 4, 6
// The sum of column 2: 11

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

    int r,c;
    int sum = 0;

    printf("Enter row number ==> ");
    scanf("%d", &r);

    for (int row = r; row == r; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            sum += box[row][col];
            printf("a[%d][%d] ==> %d  \n", row,col,box[row][col]);
        }
        printf("\n");
    }
    printf("SUM OF ROW ==> %d \n", sum);


    printf("---------------------------------------------------------------- \n");


    printf("Enter col number ==> ");
    scanf("%d", &c);

    int sum2 = 0;

    for (int row = 0; row < rows; row++)
    {
        for (int col = c; col == c; col++)
        {
            sum2 += box[row][col];
            printf("a[%d][%d] ==> %d  ", row,col,box[row][col]);
        }
        printf("\n"); 
    }
    printf("\n");
    printf("SUM OF COL ==> %d \n", sum2);


}
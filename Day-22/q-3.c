// Q.3 Write a Program to find the transpose matrix of a given 2D array.
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

int main(){


    int rows,cols;

    printf("ROW : ");
    scanf("%d",&rows);

    printf("COL : ");
    scanf("%d",&cols);

    int box[rows][cols];

    printf("--------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= cols; col++)
        {
            printf("box[%d][%d] = ",row,col);
            scanf("%d",&box[row][col]);
        }
        
    }
    printf("--------------------------\n");
    for (int col = 1; col <= rows; col++)
    {
        for (int row = 1; row <= cols; row++)
        {
            printf("box[%d][%d] = %d \t",row,col,box[row][col]);
        }
        printf("\n");
    }
    

}



// #include <stdio.h>

// int main(){
//     int size,sum = 0;

//     printf("ROW & COL SIZE : ");
//     scanf("%d",&size);

//     int box[size][size];

//     for (int row = 0; row < size; row++)
//     {
//         for (int col = 0; col < size; col++)
//         {
//             printf("ENTER : ");
//             scanf("%d",&box[row][col]);
//         }
        
//     }

//     for (int col = 0; col < size; col++)
//     {
//         for (int row = 0; row < size; row++)
//         {
//             printf("%d",box[row][col]);
            
//         }
//       printf("\n");
//     }
     
// }
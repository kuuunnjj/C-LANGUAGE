// ### Question 5:
// Write a program to find the sum of elements along the main diagonal of a 2D array. 
// Take input for the array elements from the user.

#include <stdio.h>

int main(){
    int maxsize = 100;
    int box[maxsize][maxsize];
    int rsize,csize;
    int sum = 0;

    printf("ROW SIZE : ");
    scanf("%d",&rsize);

    printf("COLUMN SIZE : ");
    scanf("%d",&csize);

    for (int row = 1; row <= rsize; row++)
    {
        for (int col = 1; col <= csize; col++)
        {
            printf("Value : ");
            scanf("%d",&box[row][col]);
        }
         printf("\n");
    }
   

    for (int row = 1; row <= rsize; row++)
    {    
        for (int col = 1; col <= csize; col++)
        {   
            if (row == col)
            {
                sum += box[row][col];
            }   
        } 
    }
    printf("SUM is : %d \n",sum);
 
}
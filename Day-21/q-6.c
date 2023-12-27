// ### Question 6:
// Write a program to find the sum of all odd elements in a 2D array. 
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
    }

    for (int row = 1; row <= rsize; row++)
    {
        for (int col = 1; col <= csize; col++)
        {   
            if (box[row][col]%2 != 0)
            {
                sum += box[row][col];
            }   
        } 
    }
    printf("SUM OF ODD NUMBERS IS : %d",sum);


}
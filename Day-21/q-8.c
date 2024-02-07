// ### Question 8:
// Write a program to find the sum of elements obtained by adding elements along the main diagonal and anti-diagonal of a 2D array row-wise. 
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

    int x = csize;

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
        
        for (int col = x; col >= 1; col--)
        {   
                
                sum += box[row][col];
                printf("%d , %d",row,col);
                break;
        } 
        x--;
    }
    printf("SUM OF NUMBERS IS : %d",sum);
    
}

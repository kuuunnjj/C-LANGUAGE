#include <stdio.h>

int main(){
    int row,col;

    for (row = 1; row <= 10; row++)
    {
        for (col = 10; col >= row; col--)
        {
            printf(" %d ",col);
        }
        printf("\n");
    }
    
}
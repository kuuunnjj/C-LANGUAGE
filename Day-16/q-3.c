#include <stdio.h>

int main(){
    int row,col;

    for (row = 6; row >= 1; row--)
    {
        for (col = 6; col >= row; col--)
        {
            printf(" %d ",col);
        }
        printf(" \n");
    }
    
}
#include <stdio.h>

int main(){
    int row,col;

    for (row = 10; row >= 1; row--)
    {
        for (col = 10; col >= 1; col--)
        {
            printf(" %d ",col);
        }
        printf("\n");
    }
    
}
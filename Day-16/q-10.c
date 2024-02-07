#include <stdio.h>

int main(){
    int row, col;

    for (row = 70; row >= 65; row--)
    {
        for (col = 70; col >= 65; col--)
        {   
            printf(" %c ",col);
        }
        printf("\n");
    }
    
}
#include <stdio.h>

int main(){
    int row,col;

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= col; col++)
        {   
            col += col+col;
            printf("%d", col);
        }
        printf("\n");
    }
    
}
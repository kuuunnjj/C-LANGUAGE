#include <stdio.h>

int main(){
    int row,col,new=1;

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf(" %d ",new++);
        }
        printf("\n");
    }
    
}
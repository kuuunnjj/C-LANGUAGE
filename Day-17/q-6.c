#include <stdio.h>

int main(){
    for (int row = 1; row <= 5; row++)
    {   
        for (int space = 4; space >= row; space--)
        {
            printf("  ");
        }
        
        for (int col = 1; col <= 2*row-1; col++)
        {   
            
            printf("* ");
            
        }
        printf("\n");
    }
    
}
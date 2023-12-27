#include <stdio.h>

int main(){
    int row, col;
    

   for (row = 0; row <= 5; row++)
   {
    int new = 70-row;
        for (col = 5; col >= row; col--)
        {
            printf("%c",new--);
        }
        printf("\n");
        
   }
   
    
}
#include <stdio.h>

int main(){
    for (int row = 5; row >= 1; row--)
    {   
         for (int space = 2; space <= row; space++)
        {
            printf("-");
        }
        for (int col = row; col <=5; col++)
        {
            printf("%d",row);
        }
        printf("\n");
    }
    
}
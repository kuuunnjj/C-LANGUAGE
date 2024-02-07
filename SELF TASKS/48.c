#include <stdio.h>

int main(){
    
    int box[100];

    for (int row = 1; row <= 3; row++)
    {
       for (int col = 1; col <= 3; col++)
       {
            printf("%d ",row);
       }
       printf("\n");
    }
    
}
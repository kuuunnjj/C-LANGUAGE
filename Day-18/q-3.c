// Q.3 Write a Program to print the below pattern using nested for loop.

#include <stdio.h>

int main(){
    for (int row = 5; row >= 1; row--)
    {   
        for (int space = 4; space >= row; space--)
        {
            printf("  ");
        }
        
        for (int col = 1; col <= row; col++)
        {
             printf("%d ",col%2);
        }
        printf("\n");
    }

}



// Q.2 Write a Program to print the below pattern using nested for loop.

#include <stdio.h>

int main(){
    for (int row = 5; row >= 1; row--)
    {   
        for (int space = 2; space <= row; space++)
        {
            printf("  ");
        }
        
        for (int col = row; col <= 5; col++)
        {
             printf("%d ",col);
        }
        printf("\n");
    }

}



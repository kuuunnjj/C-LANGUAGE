// Q.1 Write a Program to print the below pattern using nested for loop.

#include <stdio.h>

int main(){

    for (int row = 41; row <= 45; row++)
    {
        for (int col = 41; col <= row; col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
    
}
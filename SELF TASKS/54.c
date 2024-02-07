// 41. Write a C program to print 3 numbers on a line, starting with 1 and printing n lines. Accept the number of lines (n, integer) from the user.
// Test Data :
// Input number of lines: 5
// Expected Output:
// 1 2 3
// 4 5 6
// 7 8 9
// 10 11 12
// 13 14 15

#include <stdio.h>

int main(){

    int lines,new=1;

    printf("NUMBER OF LINES : ");
    scanf("%d",&lines);

    for (int row = 1; row <= lines; row++)
    {
        for (int col = 1; col <= 3; col++)
        {   

            printf("%d ",new++);
        }
        printf("\n");
    }
    
}
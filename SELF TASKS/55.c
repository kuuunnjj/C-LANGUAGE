// 42. Write a C program to print a number, its square and cube, starting with 1 and printing n lines. Accept the number of lines (n, integer) from the user.
// Test Data :
// Input number of lines: 5
// Expected Output:
// 1 1 1
// 2 4 8
// 3 9 27
// 4 16 64
// 5 25 125

#include <stdio.h>

int main(){
    int lines,new=1;

    printf("NUMBER OF LINES : ");
    scanf("%d",&lines);

    for (int row = 1; row <= lines; row++)
    {
        for (int col = 1; col <= 3; col++)
        {   
            printf("%d ",row);
            printf("%d ",row*row);
            printf("%d ",row*row*row);
            break;
        }
        printf("\n");
    }
}
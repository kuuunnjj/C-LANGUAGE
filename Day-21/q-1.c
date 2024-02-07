// Q.1 Write a Program to find the average of a given 2D array.
// For example,
// Input:
// Enter the array's row size: 3
// Enter the array's column size: 3

// Enter array's elements:
// a[0][0] = 2
// a[0][1] = 4
// a[0][2] = 1
// a[1][0] = 3
// a[1][1] = 5
// a[1][2] = 4
// a[2][0] = 8
// a[2][1] = 2
// a[2][2] = 6

// Output:
// Average of an Array: 3.88


#include <stdio.h>

int main(){
    int maxsize = 100;
    int box1[maxsize][maxsize];
    int rsize,csize;
    int sum = 0;
    int ans;


    printf("ROW SIZE : ");
    scanf("%d",&rsize);

    printf("COLUMN SIZE : ");
    scanf("%d",&csize);

    for (int row = 1; row <= rsize; row++)
    {
        for (int col = 1; col <= csize; col++)
        {   
            
            printf("value : ");
            scanf("%d",&box1[row][col]);
            
        }
        printf("\n");
    }
    
    for (int row = 1; row <= rsize; row++)
    {
        for (int col = 1; col <= csize; col++)
        {
            sum += box1[row][col];
        }
        
    }
    
    printf("sum is : %d \n",sum);
    
    ans = rsize*csize;
    printf("answer is : %.2f",(float)sum/ans);
    

    
}
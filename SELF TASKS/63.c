// 50. Write a C program to read an array of length 5 and print the position and value of the array elements of value less than 5.
// Test Data:
// Input the 5 members of the array:
// 15
// 25
// 4
// 35
// 40
// Expected Output:
// A[2] = 4.0


#include <stdio.h>

int main(){
    int box[100];

    for (int i = 0; i <= 4; i++)
    {
        printf("ENTER VALUE : ");
        scanf("%d",&box[i]);
    }

    int m=0;

    for (int i = 0; i <= 4; i++)
    {
        if (box[i]<5)
        {
            printf("box[%d] =  %d \n",m,box[i]);
          
        }
          m++;
    }
    
    
}
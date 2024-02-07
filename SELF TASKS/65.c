// 52. Write a C program to read an array of length 6 and find the smallest element and its position.
// Test Data:
// Input the length of the array: 5 Input the array elements:
// 25
// 35
// 20
// 14
// 45
// Expected Output:
// Smallest Value: 14
// Position of the element: 3

#include <stdio.h>

int main(){

    int box[100];
    int value=0;
    int new;

    for (int i = 0; i <= 4; i++)
    {
        printf("ENTER VALUE : ");
        scanf("%d",&box[i]);
    }               

    printf("----------------\n");

    for (int i = 0; i <= 4; i++)
    {   
        new = i;
        if (value < box[i])
        {
            value = box[i];
        } 
    }
     printf("MAX[%d] : %d",new,value);


}



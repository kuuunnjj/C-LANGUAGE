// 30. Write a C program to find and print the square of all the even values from 1 to a specified value.
// Test Data :
// List of square of each one of the even values from 1 to a 4 :
// Expected Output:
// 2^2 = 4
// 4^2 = 16

#include <stdio.h>

int main(){
    
    for (int i = 1; i <= 4; i++)
    {
        if (i%2 == 0)
        {
           i*i;
        }
        printf("sq \n %d",i);
    }
    
}
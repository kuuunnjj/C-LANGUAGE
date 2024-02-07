// 39. Write a C program to calculate the sum of all numbers not divisible by 17 between two given integer numbers.
// Test Data :
// Input the first integer: 50 Input the second integer: 99
// Expected Output:
// Sum: 3521

#include <stdio.h>

int main(){
    int x,y,sum=0;

    printf("X : ");
    scanf("%d",&x);
    printf("Y : ");
    scanf("%d",&y);

    for (int i = x; i <= y; i++)
    {
        if (i%17 != 0)
        {   
            i/17;
            sum += i;
        }
        
    }
    printf("%d",sum);

    
}
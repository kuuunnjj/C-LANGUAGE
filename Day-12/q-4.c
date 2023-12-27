// Q.4

//  Write a Program to print odd numbers from N to 1 using a while loop.
// For example,
// Input:
// Enter any number: 15

// Output:
// 15 13 11 9 7 5 3 1

#include <stdio.h>

int main(){
    int b;

   

    printf("Value : ");
    scanf("%d",&b);

    while (b>0)
    {   
        if (b%2 != 0)
        {
             printf("%d \n",b);
        }
        b--;
       
        
    }
    
}
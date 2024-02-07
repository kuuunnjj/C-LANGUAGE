// 1. **Factorial Calculation:**
// Write a program to calculate the factorial of a given number. 
// For example, calculate the factorial of 5 (5!) which equals 5 x 4 x 3 x 2 x 

#include <stdio.h>

int main(){

    int user,sum=0,new;

    printf("enter value : ");
    scanf("%d",&user);

    for (int i = user-1; i >= 1; i--)
    {   
     
        sum = user*i;
        user = sum;
        new = user;
        
    }
    printf("%d",new);
}

    







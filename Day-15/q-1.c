// 1. **Factorial Calculation:**
// Write a program to calculate the factorial of a given number. 
// For example, calculate the factorial of 5 (5!) which equals 5 x 4 x 3 x 2 x 

#include <stdio.h>

int main(){

    int a,c;
    double b=1;

    printf("Enter any value : ");
    scanf("%d",&c);

    for (a = 1; a <= c; a++)
    {   
        b=b*a;  
    }
    printf("%lf \n",b);
}
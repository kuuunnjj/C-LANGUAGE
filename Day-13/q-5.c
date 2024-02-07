// Q.5 Write a Program to print the factorial of a number using for loop.

#include <stdio.h>

int main(){

    int a,b,c;

    printf("Enter any value : ");
    scanf("%d",&b);

    c=1;

    for (a = 1; a <= b; a++)
    {
        c=c*a;
        printf("%d \n",c);
    }
    
}
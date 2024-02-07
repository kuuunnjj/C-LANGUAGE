// Q.6 Write a Program to print the sum of all numbers using for loop.

#include <stdio.h>

int main(){
    int a,b,c;

    printf("Enter any value : ");
    scanf("%d",&b);

    c=1;

    for (a = 1; a <= b; a++)
    {   
        c+=a;
        printf("%d \n",c);
    }
    
}
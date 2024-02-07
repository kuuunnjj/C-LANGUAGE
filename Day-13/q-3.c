
// Q.3 Write a Program to print even numbers from 1 to N using a do-while loop.
// For example,
// Input:
// Enter any number: 9

// Output:
// 2 4 6 8

#include <stdio.h>

int main(){

    int a = 1;
    int b;

    printf("Enter any value : ");
    scanf("%d",&b);

    do
    {
        if (a%2 == 0)
        {
           printf("%d \n",a);
        }
        a++;
    } while (a<=b);
    
}
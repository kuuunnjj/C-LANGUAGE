// Q.3 Write a Program to print 1 to N using a while loop.
// For example,
// Input:
// Enter any number: 7

// Output:
// 1 2 3 4 5 6 7

#include <stdio.h>

int main(){
    int a,b;
    
    a=1;

    printf("Value : ");
    scanf("%d",&b);

    while (a<=b)
    {
        printf("%d \n",a);
        a++;
    }
    
}
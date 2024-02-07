// 55. Write a C program that swaps two numbers without using a third variable.
// Input value for x & y:
// Before swapping the value of x & y: 5 7
// After swapping the value of x & y: 7 5

#include <stdio.h>

int main(){
    int x;
    int y;

    printf("Value : \n");
    scanf("%d \n %d",&x,&y);
    
    x = x+y;
    y = x-y;
    x = x-y;

    printf("X : %d\n",x);
    printf("Y : %d",y);


}
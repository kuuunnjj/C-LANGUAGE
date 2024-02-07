// Q.2 Write a Program to swap two variables using Pointers.
// For example,
// Input:
// Enter the value of x: 5
// Enter the value of y: 3

// Output:
// Before swapping:
// x: 5
// y: 3

// After swapping:
// x: 3
// y: 5

#include <stdio.h>

int main(){
    int x,y;

    printf("ENTER X : ");
    scanf("%d",&x);

    printf("ENTER Y : ");
    scanf("%d",&y);

    printf("BEFORE \n");
    printf("%d \n",x);
    printf("%d \n",y);

    printf("AFTER \n");
    int *first;
    first = &y;
    int *second;
    second = &x;
    printf("%d \n",*first);
    printf("%d \n",*second);
}
// Q.2 Write a Program to find the maximum number from the given 3 numbers using nested if else. Also, draw a Flowchart in your book.
// For example,
// Input:
// Enter a value of the first number: 8
// Enter a value of the second number: 3
// Enter a value of the third number: 12

// Output:
// The maximum value is: 12

#include <stdio.h>

int main(){
    int a,b,c;

    printf("A : ");
    scanf("%d",&a);

    printf("B : ");
    scanf("%d",&b);

    printf("C : ");
    scanf("%d",&c);

    if (a>b)
    {
        if (a>c)
        {
            printf("A is Max : %d",a);
        }
        else{
            printf("C is Max : %d",c);
        }
        
    }
    else{
        if (b>c)
        {
           printf("B is Max : %d",b);
        }
        else{
            printf("C is Max : %d",c);
        }
    }
}
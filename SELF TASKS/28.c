// 24. Write a C program that reads two integers and checks whether they are multiplied or not.
// Test Data :
// Input the first number: 5
// Input the second number: 15
// Expected Output:
// Multiplied!

#include <stdio.h>

int main(){
    int a,b;

    printf("A : ");
    scanf("%d",&a);

    printf("B : ");
    scanf("%d",&b);

    if (a > 0 && b > 0)
    {   
        printf("MULTIPLIED");
    }
    else{
        printf("INVALID");
    }
}
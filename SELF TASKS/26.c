// 23. Write a C program that reads three floating-point values and checks if it is possible to make a triangle with them. Determine the perimeter of the triangle if the given values are valid.
// Test Data :
// Input the first number: 25
// Input the second number: 15
// Input the third number: 35
// Expected Output:
// Perimeter = 75.0

#include <stdio.h>

int main(){
    int a,b,c;
    
    printf("A : ");
    scanf("%d",&a);

    printf("B : ");
    scanf("%d",&b);

    printf("C : ");
    scanf("%d",&c);

    if (c > a+b)
    {
        printf("Perimeter : %d",a+b+c);
    }
    else if (a > b+c)
    {
        printf("Perimeter : %d",a+b+c);
    }
    else if (b > a+c)
    {
        printf("Perimeter : %d",a+b+c);
    }
    else{
        printf("INVALID");
    }
}
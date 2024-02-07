// 38. Write a program that reads two numbers and divides the first number by the second number. If division is not possible print "Division is not possible".
// Test Data :
// Input two numbers:
// x: 25
// y: 5
// Expected Output: 5.0

#include <stdio.h>

int main(){
    float x,y;

    printf("X : ");
    scanf("%f",&x);
    printf("Y : ");
    scanf("%f",&y);

    if (y != 0)
    {
        printf("%.2f",x/y);
    }
    else{
        printf("NOT POSSIBLE");
    }
}
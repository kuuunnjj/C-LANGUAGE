// 15. Write a C program to calculate the distance between two points.
// Test Data :
// Input x1: 25
// Input y1: 15
// Input x2: 35
// Input y2: 10
// Expected Output:
// Distance between the said points: 11.1803

#include <stdio.h>

int main(){
    float a,b,c,d,e;

    printf("Input x1 : ");
    scanf("%f",&a);

    printf("Input x2 : ");
    scanf("%f",&b);

    printf("Input y1 : ");
    scanf("%f",&c);

    printf("Input y2 : ");
    scanf("%f",&d);


    e = ((b-a)*(b-a))+((d-c)*(d-c));

    printf("Final answer is : %.2f", sqrt(e));

}
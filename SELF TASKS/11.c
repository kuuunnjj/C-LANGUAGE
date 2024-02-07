// 11. Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.
// Test Data :
// Weight - Item1: 15
// No. of item1: 5
// Weight - Item2: 25
// No. of item2: 4
// Expected Output:
// Average Value = 19.444444

#include <stdio.h>

int main(){
    float a,b,c,d,e,f;

    printf("1 :");
    scanf("%f",&a);

    printf("2 :");
    scanf("%f",&b);

    printf("3 :");
    scanf("%f",&c);

    printf("4 :");
    scanf("%f",&d);

    f = (b+d);
    e = (a*b) + (c*d);
    e = e/f;

    printf("Final ANS : %f",e);
    

}
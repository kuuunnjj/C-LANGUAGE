// 2.
// Write a C program to calculate the compound interest for a given principal, rate, and time using loops.

// Enter principal amount: 1000
// Enter annual interest rate (in percentage): 5
// Enter time (in years): 2
// Compound Interest: 102.50

#include <stdio.h>

int main(){
    float p,r,t,ans;

    printf("ENTER VALUE : ");
    scanf("%f",&p);
    printf("ENTER INTREST RATE : ");
    scanf("%f",&r);
    printf("ENTER YEARS : ");
    scanf("%f",&t);

    ans = p * pow((1 + r / 100), t) - p;

    printf("COMPOUND INTREST : %f",ans);
}
    
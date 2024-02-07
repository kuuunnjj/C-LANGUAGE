// 53. Write a C program that accepts the principle, rate of interest, and time and calculates simple interest.
// Test Data:
// Input Data: p = 10000, r = 10% , t = 12 year
// Expected Output:
// Input principle, Rate of interest & time to find simple interest:
// Simple interest = 12000

#include <stdio.h>

int main(){
    int p,r,t;
   
    printf("Principle amount : ");
    scanf("%d",&p); 
    printf("Rate of interest : ");
    scanf("%d",&r); 
    printf("Time : ");
    scanf("%d",&t); 

    int intrest = (p*r*t)/100;

    printf("INTREST IS : %d",intrest);
}
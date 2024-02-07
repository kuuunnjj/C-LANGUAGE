// 20. Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. Display a message if it is not possible to find the roots.
// Test Data :
// Input the first number(a): 25
// Input the second number(b): 35
// Input the third number(c): 12
// Expected Output:
// Root1 = -0.60000
// Root2 = -0.80000

// x = (-b ± √Δ) / 2a
// Δ= b2-4ac.


#include <stdio.h>

int main(){
    float a,b,c,delta,ANS1,ANS2;

    printf("A : ");
    scanf("%f",&a);

    printf("B : ");
    scanf("%f",&b);

    printf("C : ");
    scanf("%f",&c);

    // Δ= b*b-4ac.  

    delta = (b*b) - (4*a*c);

    // x = (-b ± √Δ) / 2a

    ANS2 = (-b + sqrt(delta)) / (2 * a);
    printf("ANSWER - 2 : %f", ANS2);


    ANS1 = (-b - sqrt(delta)) / (2 * a);
    printf("ANSWER - 1 : %f\n", ANS1);
    
  
}
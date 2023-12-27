// **Question 3:**
// Write a TSRN function named `divideNumbers()` that takes two integers as input and calculates their division. Print the result inside the function. Handle the case when the divisor is zero. Call this function from the `main()` function and display the quotient.

#include <stdio.h>
void division(float n1, float n2){
    printf("DIVISION IS : %.2f",n1/n2);
}

void main(){
    int a,b;
    printf("ENTER 1ST VALUE : ");
    scanf("%d",&a);
    printf("ENTER 2ND VALUE : ");
    scanf("%d",&b);
    if (b > 0)
    {
        division(a,b);
    }
    else{
        printf("CAN'T USE ZERO...");
    }
   
}
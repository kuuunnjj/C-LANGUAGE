// **Question 2:**
// Define a TSRN function called `multiplyNumbers()` that takes two integers as 
// parameters and calculates their multiplication. Print the result inside the function.
//  Call this function from the `main()` function and display the multiplication of the
//   two numbers.

#include <stdio.h>

void multiplication(int n1, int n2){
    printf("MULTIPLICATION IS : %d",n1*n2);
}

void main(){
    int a,b;
    printf("ENTER 1ST VALUE : ");
    scanf("%d",&a);
    printf("ENTER 2ND VALUE : ");
    scanf("%d",&b);
    multiplication(a,b);
}
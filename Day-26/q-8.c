// **Question 4:**
// Define a TSRN function `calculateSQUARE()` that takes an integer as input and calculates its cube. Print the result inside the function. Call this function from the `main()` function and display the cube of a number.

#include <stdio.h>

void cube(int n1){
    printf("SQUARE IS : %d",n1*n1);
}
void main(){
    int a;
    printf("ENTER VALUE : ");
    scanf("%d",&a);

    cube(a);
}
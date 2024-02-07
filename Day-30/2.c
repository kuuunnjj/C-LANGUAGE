// **Task 3: Swap Three Numbers Using Call by Reference in User-Defined Function**
// Write a C function that swaps the values of three numbers using call by reference. Create a user-defined function that takes three pointer parameters and swaps the numbers. 

#include <stdio.h>

swap(int a, int b){
    
    int c;
    b = a;
    c = b;
    a = c;

    return a,b;
}

int main(){
    int a,b;

    printf("ENTER A : ");
    scanf("%d",&a);
    printf("ENTER B : ");
    scanf("%d",&b);

    printf("A : %d \n B : %d",swap(a,b));
}
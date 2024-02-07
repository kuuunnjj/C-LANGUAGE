// 2. **Prime Number Check:**
// Create a program that checks whether a given number is a prime number or not.
// For instance, check if 7, 10, or 13 are prime numbers.


#include <stdio.h>

int main(){

    int a;

    printf("Enter any value :");
    scanf("%d",&a);

    if(a/1 == a && a%a == 0)
    {
        printf("number is prim");
    }
    else{
        printf("not");
    }
}
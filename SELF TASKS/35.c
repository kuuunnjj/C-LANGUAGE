// 31. Write a C program to check whether a given integer is positive even,
//  negative even, positive odd or negative odd. Print even if the number is 0.
// Test Data :
// Input an integer: 13
// Expected Output:
// Positive Odd

#include <stdio.h>

int main(){
    int i;

    printf("ENTER : ");
    scanf("%d",&i);

    if (i == 0)
    {
        printf("even");
    }
    else if (i%2 == 0 && i > 0)
    {
        printf("positive even");
    }
    else if (i%2 == 0 && i < 0)
    {
        printf("nagative even");
    }
    else if (i%2 != 0 && i > 0)
    {
        printf("positive odd");
    }
    else{
        printf("nagative odd");
    }
    
    
    
}
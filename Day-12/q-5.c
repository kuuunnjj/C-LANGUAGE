// Q.5 Write a Program to print leap years between two given numbers using a while loop.
// For example,
// Input:
// Enter the first number: 2020
// Enter the second number: 2040

// Output:
// 2020, 2024, 2028, 2032, 2034, 2040

#include <stdio.h>

int main(){
    int a,b;

    printf("FIRST VALUE : ");
    scanf("%d",&a);

    printf("SECOND VALUE : ");
    scanf("%d",&b);

    while (a<=b)
    {
        printf("%d \n",a);
        a+=4;
        
    }
    
}
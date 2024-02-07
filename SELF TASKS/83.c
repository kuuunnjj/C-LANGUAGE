// 75. Write a C program that accepts a seven-digit number, separates the number into its individual digits, and prints the digits separated from one another by two spaces each.
// Sample Input: 2345678
// Input a seven digit number:
// Output: 2 3 4 5 6 7 8

#include <stdio.h>

int main(){
    
    int x;

    printf("Input a seven digit number : ");
    scanf("%d",&x);

    printf("%d   ", (x/1000000));
    x = x - ((x/1000000)*1000000);

    printf("%d   ", (x/100000));
    x = x - ((x/100000)*100000);

    printf("%d   ", (x/10000));
    x = x - ((x/10000)*10000);

    printf("%d   ", (x/1000));
    x = x - ((x/1000)*1000);

    printf("%d   ", (x/100));
    x = x - ((x/100)*100);

    printf("%d   ", (x/10));
    x = x - ((x/10)*10); 

    printf("%d\n", (x%10));
    

}
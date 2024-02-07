// 72. Write a C program to remove any negative sign in front of a number.
// Input a value (negative):
// Original value = -253
// Absolute value = 253

#include <stdio.h>

int main(){
    int og,ab;

    printf("Original value : ");
    scanf("%d",&og);

    ab = (og-og)-og;
    printf("Absolute value : %d",ab);
}
// 35. Write a C program to check if two numbers in a pair are in ascending order or descending order.
// Test Data :
// Input a pair of numbers (for example 10,2 : 2,10):
// Input first number of the pair: 10
// Expected Output:
// Input second number of the pair: 2
// The pair is in descending order!

#include <stdio.h>

int main(){
    int pelu,biju,javab = 0;

    printf("PELI PAIR : ");
    scanf("%d",&pelu);
    printf("BIJI PAIR : ");
    scanf("%d",&biju);

    if (pelu > biju)
    {
        printf("D");
    }
    else{
        printf("A");
    }
}
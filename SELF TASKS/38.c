// 34. Write a C program to compute the sum of consecutive odd numbers from a given pair of integers.
// Test Data :
// Input a pair of numbers (for example 10,2):
// Input first number of the pair: 10
// Input second number of the pair: 2
// Expected Output:
// List of odd numbers: 3
// 5
// 7
// 9
// Sum=24

#include <stdio.h>

int main(){

    int pelu,biju,javab = 0;

    printf("PELI PAIR : ");
    scanf("%d",&pelu);
    printf("BIJI PAIR : ");
    scanf("%d",&biju);

    if (pelu>biju)
    {
       for (int i = biju; i <= pelu; i++)
        {
        if (i%2 != 0)
        {
            printf("RAKAM CHE : %d \n",i);
            javab += i; 
        } 
        }
         printf("JAVAB CHE : %d",javab);
    }
}
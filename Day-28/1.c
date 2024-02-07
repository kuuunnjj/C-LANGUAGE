// **Question 1:**  Write a C program that calculates the sum of squares of all even numbers from 1 to a given positive integer `n`. Implement a user-defined function called `calculateSumOfSquares` that takes an integer `n` as input from user  and returns the sum of squares of all even numbers from 1 to `n`. Display the calculated sum in the `main` function use TSRS.

#include <stdio.h>

calculateSumOfSquares(int loop){
    int sum = 0;
    for (int i = 1; i <= loop; i++)
    {
        if (i%2 == 0)
        {
            printf("%d \n",i*i);
            sum += i*i;
        }
    }
    return (sum);
}

int main(){

    int loop;
    printf("ENTER ANY VALUE : ");
    scanf("%d",&loop);

    // calculateSumOfSquares(loop);
    printf("SUM OF EVEN SQUARE IS : %d",calculateSumOfSquares(loop));
    
}

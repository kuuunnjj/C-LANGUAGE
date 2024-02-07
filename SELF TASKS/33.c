// 29. Write a C program that read 5 numbers and sum of all odd values between them.
// Test Data :
// Input the first number: 5
// Input the second number: 7
// Input the third number: 9
// Input the fourth number: 10
// Input the fifth number: 13
// Expected Output:
// Sum of all odd values: 34

#include <stdio.h>

int main(){

    int box[5];
    int sum = 0;

    for (int i = 0; i <= 4; i++)
    {
        printf("ENTER : ");
        scanf("%d",&box[i]);
    }
    for (int i = 0; i <= 4; i++)
    {
        if (box[i]%2 != 0)
        {
            sum += box[i];
        }
        
    }
    printf("ANSWER IS : %d",sum);
}
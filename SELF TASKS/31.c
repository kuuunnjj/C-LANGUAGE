// 27. Write a C program that reads 5 numbers and counts the number of positive numbers and negative numbers.
// Test Data :
// Input the first number: 5
// Input the second number: -4
// Input the third number: 10
// Input the fourth number: 15
// Input the fifth number: -1
// Expected Output:
// Number of positive numbers: 3
// Number of negative numbers: 2

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
        if (box[i]>0)
        {   
            sum += 1;
        }
        
    }
    printf("Postive Number : %d \n",sum);
    printf("Nagative Number : %d",5-sum);  
}
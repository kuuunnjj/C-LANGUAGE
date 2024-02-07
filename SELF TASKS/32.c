// 28. Write a C program that reads 5 numbers, counts the number of positive numbers, and prints out the average of all positive values.
// Test Data :
// Input the first number: 5
// Input the second number: 8
// Input the third number: 10
// Input the fourth number: -5
// Input the fifth number: 25
// Expected Output:
// Number of positive numbers: 4
// Average value of the said positive numbers: 12.00

#include <stdio.h>

int main(){

    int size,store = 0,sum = 0;

    printf("ENTER ROW & COL SIZE : ");
    scanf("%d",&size);

    int box[size];

    for (int i = 1; i <= size; i++)
    {
        printf("ENTER :");
        scanf("%d",&box[i]);
    }

    for (int i = 1; i <= size; i++)
    {
        if (box[i]>0)
        {
            store += 1;
            sum += box[i];
            // printf("%d \n",box[i]);
        }
    }
    printf("Number of positive numbers : %d \n",store);
    printf("Average value of the said positive numbers : %d",sum/store);

}
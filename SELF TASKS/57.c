// 44. Write a C program to calculate the average mathematics marks of some students. Input 0 (excluding to calculate the average) or a negative value to terminate the input process.
// Test Data :
// Input Mathematics marks (0 to terminate): 10
// 15
// 20
// 25
// 0
// Expected Output:
// Average marks in Mathematics: 17.50

#include <stdio.h>

int main(){
    int box[100];
    int sum=0;

    for (int i = 0; i <= 3; i++)
    {   
        
        printf("MARKS : ");
        scanf("%d",&box[i]);

        
        
    }

    for (int i = 0; i <= 3; i++)
    {
        if(box[i] <= 0) {
          sum+=box[i];
        }

    }
    printf("%d",sum/4);


    
}
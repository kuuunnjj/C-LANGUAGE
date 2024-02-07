// 33. Write a C program that accepts some integers from the user and finds the highest value and the input position.
// Test Data :
// Input 5 integers:
// 5
// 7
// 15
// 23
// 45
// Expected Output:
// Highest value: 45
// Position: 5

#include <stdio.h>

int main(){

    int box[5];
    int swap = 0, po = 0;

    for (int i = 0; i <= 4; i++)
    {
        printf("ENTER : ");
        scanf("%d",&box[i]);
    }   

    for (int i = 0; i <= 4; i++)
    {   
        
        if (box[i] >= swap)
        {   
            swap = box[i];
            po = i;  
        }
        
    }
    printf("%d \n",swap);
    printf("%d",po+1);


}
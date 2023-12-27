// 4. Create a program in [programming language of choice] that
//  prompts the user to input values into a 1D array and identifies and displays 
//  all the odd numbers within the array.

#include <stdio.h>

int main(){

    int box[5];

    for (int i = 0; i <= 4; i++)
    {
        printf("ENTER VALUE : ");
        scanf("%d",&box[i]);
    }
    for (int i = 0; i <= 4; i++)
    {
        if (box[i]%2 != 0)
        {
            printf("ODD NUMBERS : %d \n",box[i]);
        }
        
    }
    
}
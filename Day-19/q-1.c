// 1. Write a program in [programming language of choice] that initializes
//  a 1D array and takes user input to populate its elements.

#include <stdio.h>

int main(){

    int box[5];

    for (int i = 0; i <= 4; i++)
    {
        printf("ENTER ANY VALUE : ");
        scanf("%d",&box[i]);
    }
    
    for (int i = 0; i <= 4; i++)
    {
        printf("%d \n",box[i]);
    }
    
}

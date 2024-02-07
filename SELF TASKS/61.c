// 48. Write a C program that reads and prints the elements of an array of length 7. Before printing, replace every negative number, zero, with 100.
// Test Data:
// Input the 5 members of the array:

#include <stdio.h>

int main(){
    int box[5];

    for (int i = 0; i <= 4; i++)
    {
        printf("ENTER : ");
        scanf("%d",&box[i]);
    }

    printf("---------------------\n");

    for (int i = 0; i <= 4; i++)
    {
        if (box[i] <= 0 )
        {
            box[i]=100;
        }
        printf("VALUE : %d \n",box[i]);
    }
    
}

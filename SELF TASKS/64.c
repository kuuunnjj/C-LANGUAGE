// 51. Write a C program to read an array of length 6, change the first element by the last, the second element by the fifth and the third element by the fourth. Print the elements of the modified array.
// Test Data:
// Input the 5 members of the array:

#include <stdio.h>

int main(){
    int box[100];

    for (int i = 0; i <= 4; i++)
    {
        printf("ENTER VALUE : ");
        scanf("%d",&box[i]);
    }

    printf("-------------------\n");

    for (int i = 4; i >= 0; i--)
    {
        printf("VALUE IS : %d \n",box[i]);
    }
    

}
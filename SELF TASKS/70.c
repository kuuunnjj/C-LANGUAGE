// 58. Write a C program that accepts 4 real numbers from the keyboard and prints out the difference between the maximum and minimum values of these four numbers.
// Input four numbers: 1.54 1.236 1.3625 1.002
// Difference is 0.5380

#include <stdio.h>

int main(){
    int box[4];
    int mini;

    for (int i = 0; i <= 3; i++)
    {
        printf("Value : ");
        scanf("%d",&box[i]);
    }

    for (int i = 0; i <= 3; i++)
    {
        if (mini > box[i])
        {
            mini = box[i];
        }
        
    }
    printf("MINIMUM %d \n",mini);

    int maximum=0;

    for (int i = 0; i < 4; i++)
    {
        if (maximum < box[i])
        {
            maximum = box[i];
        }  
    }
    printf("MAXIMUM %d \n",maximum);

    printf("D : %d",maximum-mini);
}   
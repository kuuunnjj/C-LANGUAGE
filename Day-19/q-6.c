// 6. Develop a program in [programming language of choice] that takes input 
// from the user for two separate 1D arrays, adds corresponding elements together, 
// and stores the result in a new array.

#include <stdio.h>

int main(){
    int box1[5];
    int box2[5];
    int box3[5];

    for (int i = 0; i <= 4; i++)
    {
        printf("ENTER VALUE OF BOX1 : ");
        scanf("%d",&box1[i]);
    }

    for (int i = 0; i <= 4; i++)
    {
        printf("ENTER VALUE OF BOX2 : ");
        scanf("%d",&box2[i]);
    }
    
    for (int i = 0; i <= 4; i++)
    {
        box3[5] = box1[i]+box2[i];
        printf("ANSWER : %d \n",box3[5]);
    }
    
}
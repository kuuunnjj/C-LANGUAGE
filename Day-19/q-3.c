// 3. Implement a program in [programming language of choice] that allows 
// the user to input values into a 1D array and calculates the average of these elements.

#include <stdio.h>

int main(){
    int box[10];
    int sum=0;

    for (int i = 0; i <= 9; i++)
    {
        printf("ENTER ANY VALUE : ");
        scanf("%d",&box[i]);
    }
    for (int i = 0; i <= 9; i++)
    {
        sum += box[i]/10;
    }
    printf("AVERAGE OF NUMBERS : %d",sum);

}


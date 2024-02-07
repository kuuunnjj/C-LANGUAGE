// 4. **Double all elements in an array.**
// - Write a program to double element present in an array of integers.


#include <stdio.h>

int main(){
    int box[4];

    for (int i = 0; i <= 3; i++)
    {
        printf("ENTER VALUE : ");
        scanf("%d",&box[i]);
    }

    for (int i = 0; i <= 3; i++)
    {
        printf("REVERSE : %d \n",box[i]*2);
    }


}

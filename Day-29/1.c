// Q.1 Write a Program to find the square of each element of a given 1D array using a Pointer.
// For example,
// Input:
// Enter the array's size: 5

// Enter array's elements:
// a[0] = 2
// a[1] = 4
// a[2] = 1
// a[3] = 3
// a[4] = 7

// Output:
// Square of each element:
// 4, 16, 1, 9, 49

#include <stdio.h>

int main(){

    int size;
    printf("ENTER SIZE : ");
    scanf("%d",&size);

    int box[size];

    int *pbox[100];

    int p2box[100];

    for (int i = 0; i < size; i++)
    {
        printf("VALUE : ");
        scanf("%d",&box[i]);
    }

   for (int i = 0; i < size; i++)
   {    
        p2box[i] = box[i]*box[i]; 
   }
   
   for (int i = 0; i < size; i++)
   {    
        pbox[i] = &p2box[i];
        printf("SQ : %d \n",*pbox[i]);
   }
}

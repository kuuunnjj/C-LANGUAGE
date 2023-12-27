// Q.5 Write a Program to perform the merge operation of two 1D arrays & store it in another array. Keep in mind that both array sizes can be different.
// For example,
// Input:
// Enter array A's size: 5

// Enter array A's elements:
// a[0] = 7
// a[1] = 4
// a[2] = 9
// a[3] = 5
// a[4] = 2

// Enter array B's size: 3

// Enter array B's elements:
// b[0] = 1
// b[1] = 3
// b[2] = 6

// Output:
// Array C is: 7, 4, 9, 5, 2, 1, 3, 6


#include <stdio.h>

int main(){

    int maxsize = 100;
    int box1[maxsize],box2[maxsize],box3[maxsize];

    int size1,size2,size3 = 0;

    printf("1ST SIZE : ");
    scanf("%d",&size1);

    for (int i = 0; i < size1; i++)
    {
        printf("ENTER VALUE : ");
        scanf("%d",&box1[i]);
        box3[i] = box1[i];
        size3++;
    }



    printf("2ND SIZE : ");
    scanf("%d",&size2);

    for (int i = 0; i < size2; i++)
    {
        printf("ENTER VALUE : ");
        scanf("%d",&box2[i]);
        box3[size3] = box2[i];
        size3++;
    }

    for (int i = 0; i < size3; i++)
    {
       printf("%d \n",box3[i]);
    }
    


}
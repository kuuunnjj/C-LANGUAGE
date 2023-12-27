// Q.1 Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.
// For example,
// Input:
// Enter array size: 5
// Enter array elements:
// a[0] = 6
// a[1] = 4
// a[2] = 1
// a[3] = 5
// a[4] = 2

// Output:
// The sum of an Array: 18

#include <stdio.h>

addition(int box[]){

    int sum = 0;  
     for (int i = 0; i < 5; i++)
    {
       sum += box[i];
       
    }
    return sum;
}

int main(){
   
    int box[100];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter : ");
        scanf("%d",&box[i]);
    }

    printf("%d",addition(box[100]));
    
}
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
addition(int box[], int size){

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += box[i];
    }
    return sum;

}
int main(){

    int size;
    printf("SIZE :");
    scanf("%d",&size);

    int box[size];

    for (int i = 0; i < size; i++)
    {
        printf("VALUE : ");
        scanf("%d",&box[i]);
    }
    
    printf("The sum of an Array : %d",addition(box,size));
    
}
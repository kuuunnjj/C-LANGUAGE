// 6. Write a C program to compute the perimeter and area of a circle with a given radius.
// Expected Output:
// Perimeter of the Circle = 37.680000 inches
// Area of the Circle = 113.040001 square inches

#include <stdio.h>

int main(){
    int r;
    const float pi = 3.14;
    
    printf("Enter radius :");
    scanf("%d",&r);

    printf("Perimeter of the Circle : %.2f \n", 2*pi*r);
    printf("Area of the Circle : %.2f", pi*r*r);
}
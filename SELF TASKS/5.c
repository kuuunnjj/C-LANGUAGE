// 5. Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.
// Expected Output:
// Perimeter of the rectangle = 24 inches 
// Area of the rectangle = 35 square inches

#include <stdio.h>

int main(){

    int width = 5;
    int height = 7;

    printf("Perimeter of the rectangle = %d \n", 2*(width+height));
    printf("Area of the rectangle = %d", width*height);

}



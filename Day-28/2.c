// **Question 2:**Write a C program to calculate the area of a rectangle using a user-defined function. Implement a function called calculateArea() that takes the length and width of the rectangle as inputs and returns the calculated area. Display the area in the main function.

#include <stdio.h>
calculateArea(int lw){
    
    return (lw);
}

int main(){
    int length,width,lw;
   
    printf("ENTER LENGTH : ");
    scanf("%d",&length);

    printf("ENTER WIDTH : ");
    scanf("%d",&width);

    lw=length*width;

    calculateArea(lw);
    printf("AREA OF RECTANGLE IS : %d",calculateArea(lw));
}
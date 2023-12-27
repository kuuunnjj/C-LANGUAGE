// **Question3:**

// Write a C program that takes two integer inputs representing the length and width of a rectangle. Without using logical operators (`&&` or `||`), determine if the given dimensions represent a square or a rectangle, and print the appropriate message. Handle cases where the dimensions might not be valid for a rectangle.

#include <stdio.h>

int main(){
    int l,w;

    printf("L : ");
    scanf("%d",&l);

    printf("W : ");
    scanf("%d",&w);

    if (l == w)
    {
        printf("Dimensions might not be valid for a rectangle.(SQUARE) ");
    }
    else{
        printf("Dimensions might be valid for a rectangle.(RECTANGLE)");
    }
}
// 37. Write a C program to read the coordinates (x, y) (in the Cartesian system) and find the quadrant to which it belongs (Quadrant -I, Quadrant -II, Quadrant -III, Quadrant -IV).
// Note: A Cartesian coordinate system is a coordinate system that specifies each point uniquely in a plane by a pair of numerical coordinates.
// These are often numbered from 1st to 4th and denoted by Roman numerals: I (where the signs of the (x,y) coordinates are I(+,+), II (−,+), III (−,−), and IV (+,−).
// Test Data :
// Input the Coordinate(x,y):
// x: 25
// y: 15
// Expected Output:
// Quadrant-I(+,+)


#include <stdio.h>

int main(){
    int x,y;

    printf("X : ");
    scanf("%d",&x);
    printf("Y : ");
    scanf("%d",&y);

    if (x > 0 && y > 0)
    {
        printf("(+,+)");
    }
    else if (x < 0 && y < 0)
    {
        printf("(-,-)");
    }
    else if (x > 0 && y < 0)
    {
        printf("(+,-)");
    }
    else if (x < 0 && y > 0)
    {
        printf("(-,+)");
    }
    else
    {
        printf("(neutral)");
    }
   
    
    
}
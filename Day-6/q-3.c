// Q.3 Write C Program to find the third angle of a right triangle if two other angles are given.

#include <stdio.h>

int main(){
    int a,b,c,d;

    printf("First angle :");
    scanf("%d",&a);

    printf("Second angle :");
    scanf("%d",&b);

    c = a+b;
    d = 180-c;

    printf("Third angle : %d",d);

}
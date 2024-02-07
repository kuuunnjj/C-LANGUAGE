#include <stdio.h>

int main(){
    const float a = 3.14;
    int b;

    printf("Enter a value :");
    scanf("%d", &b);

    printf("Area of cricle is : %.2f", a*b*b);
}
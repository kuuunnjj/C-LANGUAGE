#include <stdio.h>

int main(){
    int a;

    printf("Value : ");
    scanf("%d",&a);

    a+=3;
    printf("Increment by 3 is : %d \n", a);

    a*=2;
    printf("Multiplication by 2 is : %d", a);
}
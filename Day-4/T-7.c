#include <stdio.h>

int main(){
    int a,b;
    const int c = 3;

    printf("x : ");
    scanf("%d", &a);

    printf("y : ");
    scanf("%d", &b);

    printf("Formula is : (x+y)*3 : ANS is : %d", (a+b)*c);



}
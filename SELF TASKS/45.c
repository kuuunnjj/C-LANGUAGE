#include <stdio.h>

int main(){
    int a,b,c;

    printf("A : ");
    scanf("%d",&a);
    printf("B : ");
    scanf("%d",&b);
    printf("C : ");
    scanf("%d",&c);

    (a>b) ? (a>c) ?  printf("a is max") : printf("c is max") : (b>c) ? printf("b is max") : printf("c is max");
}
// Q2. Find minimum using pointer.



#include <stdio.h>

int main(){
    int a,b;

    printf("A : ");
    scanf("%d",&a);

    printf("b : ");
    scanf("%d",&b);

    int *ap=&a;
    int *bp=&b;

    if (*ap < *bp)
    {
        printf("A is MIN");
    }
    else{
        printf("B is MIN");
    }
}
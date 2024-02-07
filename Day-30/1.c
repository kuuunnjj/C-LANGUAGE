// **Task 1: Swap values (Call by Value)**

#include <stdio.h>

int main(){
    
    int a,b,c;
    b = a;
    c = b;
    a = c;

    printf("ENTER A : ");
    scanf("%d",&a);
    printf("ENTER B : ");
    scanf("%d",&b);

    printf("A : %d \n B : %d",a,b);
}
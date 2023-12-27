#include <stdio.h>

int main(){
    int a;

    printf("Value : ");
    scanf("%d", &a);

    a--;
    printf(" 1st Decrement : %d \n", a);

    a--;
    printf(" 2nd Decrement : %d \n", a);

    a++;
    printf("Answer is : %d \n", a);

}
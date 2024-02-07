#include <stdio.h>

int main(){
    int a = 10;
    int b = 20;

    int *ap = &b;
    int *bp = &a;

    printf("%d \n",*ap);
    printf("%d",*bp);
    
}
// **Task 6: Using chain of pointer make 3 pointer and find value of given integer.

#include <stdio.h>

int main(){
    int a = 10;

    int *p1 = &a;
    int **p2 = &p1;
    int ***p3 = &p2;

    printf("%d",***p3);
}
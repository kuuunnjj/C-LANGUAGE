// Q.2 Write C Program to find gross salary by adding % of HRA, DA, and TA of user choice.

#include <stdio.h>

int main(){
    int a,b,c,d;

    printf("Base Salary :");
    scanf("%d", &a);

    printf("HRA :");
    scanf("%d", &b);

    printf("DA :");
    scanf("%d", &c);

    printf("TA :");
    scanf("%d", &d);

    printf("Final answer is %d", a+b+c+d);

}
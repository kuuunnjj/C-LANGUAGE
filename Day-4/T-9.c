#include <stdio.h>

int main(){
    int a,b,c,d,e;

    printf("a is :");
    scanf("%d",&a);

    printf("b is :");
    scanf("%d",&b);


    // multiplication 
    // printf("Formula is (a + b)2  +  (a + b)2 so the ANS is %d", (a + b)*2 + (a + b)*2);

    // square 
    c = (a + b)*(a + b);
    printf("sub1 ANS is : %d", c);

    d = (a + b)*(a + b);
    printf("sub2 ANS is : %d", d);

    e = c+d;
    printf("FINAL ANS IS : %d", e);
}
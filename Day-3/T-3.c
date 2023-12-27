#include <stdio.h>

int main()
{

    int a, b, c, d;

    printf("First value \t");
    scanf("%d", &a);

    printf("Second value \t");
    scanf("%d", &b);

    printf("Third value \t");
    scanf("%d", &c);

    printf("Fourth value \t");
    scanf("%d", &d);

    int e = a + b + c + d;

    printf("Sum of four numbers is : %d \n", e);

    int f = e * 5;

    printf("Multiplication of value is : %d \n", f);

    int g = f / 2;

    printf("Division of value is : %d \n", g);
}

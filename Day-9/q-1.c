// Q.1 Write a Program to find the minimum number from the given 4 numbers using the ternary operator.
// For example,
// Input:
// Enter a value of the first number: 8
// Enter a value of the second number: 3
// Enter a value of the third number: 12

// Output:
// The minimum value is: 3

#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("A : ");
    scanf("%d", &a);

    printf("B : ");
    scanf("%d", &b);

    printf("C : ");
    scanf("%d", &c);

    printf("D : ");
    scanf("%d", &d);

    (a < b) ? (a < c) ? (a < d) ? printf("A is Min : %d", a) : printf("D is Min : %d", d)
              : (c < d) ? printf("C is Min : %d", c) : printf("D is Min : %d", d) :

    (b < c) ? (b < d) ? printf("B is Min : %d", b) : printf("D is Min : %d", d):
      (c < d) ? printf("C is Min : %d",c) : printf("D is Min : %d",d);
}
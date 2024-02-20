// 2. Write a C program to find the sum of two integers entered by the user.

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", a + b);

    return 0;
}
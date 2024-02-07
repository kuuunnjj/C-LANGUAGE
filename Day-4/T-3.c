#include <stdio.h>

int main()
{
    int a;
    
    printf("Value : ");
    scanf("%d", &a);

    a += 5;
    printf("Increment by 5 is : %d \n", a);

    a -= 2;
    printf("decrement by 2 is : %d", a);
}
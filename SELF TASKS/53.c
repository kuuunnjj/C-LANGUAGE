// 40. Write a C program that finds all integer numbers that divide by 7 and have a remainder of 2 or 3 between two given integers.
// Test Data :
// Input the first integer: 25
// Input the second integer: 45
// Expected Output:
// 30
// 31
// 37
// 38
// 44

#include <stdio.h>

int main()
{
    int x, y;

    printf("X : ");
    scanf("%d", &x);
    printf("Y : ");
    scanf("%d", &y);

    for (int i = x; i < y; i++)
    {
        if (i % 7 == 0)
        {
            for (int i = x; i < y; i++)
            {
                if (i % 7 == 2 || i % 7 == 3)
                {
                    printf("%d \n", i);
                }
            }
            break;
        }
    }
}
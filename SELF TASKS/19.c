#include <stdio.h>

int main()
{
    int a, b, c, d, e, f;

    printf("A : ");
    scanf("%d", &a);

    printf("B : ");
    scanf("%d", &b);

    printf("C : ");
    scanf("%d", &c);

    printf("D : ");
    scanf("%d", &d);

    printf("E : ");
    scanf("%d", &e);

    printf("F : ");
    scanf("%d", &f);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                if (a > e)
                {
                    if (a > f)
                    {
                        printf("A is Max :");
                    }
                    else
                    {
                        printf("F is Max :");
                    }
                }
                else
                {
                    if (e > f)
                    {
                        printf("E is Max :");
                    }
                    else
                    {
                        printf("F is Max :");
                    }
                }
            }
            else
            {

                if (d > e)
                {

                    if (c > d)
                    {
                        printf("C is Max :");
                    }
                    else
                    {
                        printf("D is Max :");
                    }
                }
                else
                {

                    if (d > e)
                    {
                        printf("D is Max :");
                    }
                    else
                    {
                        printf("E is Max :");
                    }
                }
            }
        }
        else
        {
            if (c > d)
            {
                printf("C is Max :");
            }
            else
            {
                printf("D is Max :");
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                if (b > e)
                {
                    if (b > f)
                    {
                        printf("B is Max :");
                    }
                    else
                    {
                        printf("F is Max :");
                    }
                }
                else
                {
                    if (b > e)
                    {
                        printf("B is Max :");
                    }
                    else
                    {
                        printf("E is Max :");
                    }
                }
            }
            else
            {
                if (b > d)
                {
                    if (b > c)
                    {
                        printf("B is Max :");
                    }
                    else
                    {
                        printf("C is Max :");
                    }
                }
                else
                {
                    if (b > d)
                    {
                        printf("B is Max :");
                    }
                    else
                    {
                        printf("D is Max :");
                    }
                }
            }
        }
        else
        {
            if (e > f)
            {
                printf("E is Max :");
            }
            else
            {
                printf("F is Max :");
            }
        }
    }
}
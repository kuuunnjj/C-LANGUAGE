// 22. Write a C program that reads 5 numbers and sums all odd values between them.
// Test Data :
// Input the first number: 11
// Input the second number: 17
// Input the third number: 13
// Input the fourth number: 12
// Input the fifth number: 5
// Expected Output:
// Sum of all odd values: 46

#include <stdio.h>

int main(){
    int p,q,r,s,t,sum;

     printf("ENTER P : ");
    scanf("%d",&p);

    printf("ENTER Q : ");
    scanf("%d",&q);

    printf("ENTER R : ");
    scanf("%d",&r);
    
    printf("ENTER S : ");
    scanf("%d",&s);

    printf("ENTER T : ");
    scanf("%d",&t);

    sum = 0;

    if (p%2 != 0)
    {
        if (q%2 != 0)
        {
            if (r%2 != 0)
            {
                if (s%2 != 0)
                {
                    if (t%2 != 0)
                    {
                        printf("%d",sum+p+q+r+s+t);
                    }
                    else{
                        printf("%d",sum+p+q+r+s);
                    }
                }
                else{
                    printf("%d",sum+p+q+r+t);
                }
            }
            else{
                printf("%d",sum+p+q+s+t);
            }
        }
        else{
            printf("%d",sum+p+r+s+t);
        }
    }
    else{
        printf("%d",sum+q+r+s+t);
    }
}
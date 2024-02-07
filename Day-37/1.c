// 1. Enter the value of N: 5
// The sum of the first 5 natural numbers is: 15

#include <stdio.h>

int main(){
    int user;
    int sum = 0;

    printf("ENTER VALUE : ");
    scanf("%d",&user);

    for (int i = 1; i <= user; i++)
    {
        sum += i;
    }
    printf("SUM OF N VALUES : %d",sum);
}
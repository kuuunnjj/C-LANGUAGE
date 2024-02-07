// 59. Write a C program to display the sum of series 1 + 1/2 + 1/3 + ………. + 1/n.
// Input any number: 1 + 1/0
// Sum = 1/0

#include <stdio.h>

int main(){
    float sum = 0;
    float n;
    float new = 1;

    printf("N : ");
    scanf("%f",&n);

    for (int i = 1; i <= n; i++)
    {
        
        printf("%.0f/%d + ",new,i);
        sum += i;
        
    }
    printf("\n");
    printf("%.0f/%.0f ",new,sum);
}
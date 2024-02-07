// 63. Write a C program that accepts a positive integer n less than 100 from the user. It prints out the sum of 14 + 24 + 44 + 74 + 114 + • • • + m4. In this case, m is less than or equal to n. Print an appropriate message.
// Input a positive number less than 100: 68
// Sum of the series is 37361622

#include <stdio.h>

int main(){
    int n,j = 1;
    int store=0;

    printf("N : ");
    scanf("%d",&n); 

     for(int i = 1; j <= n; i++)
        {     
         store += j*j*j*j;
             j+=i;
        }
        
    printf("%d",store);
   
}



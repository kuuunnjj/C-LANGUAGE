// 5. **Table of a Number:**
// Write a program to display the multiplication table of a given number.
// For instance, display the table of 5: 5 x 1 = 5, 5 x 2 = 10, ..., 5 x 10 = 50.

#include <stdio.h>

int main(){

   int a,b;

   printf("Enter any value :");
   scanf("%d",&a);


   for (b = 1; b <= 10; b++)
   {
        printf("%d * %d = %d \n", a,b,a*b);
   }
   
    
}
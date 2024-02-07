// 4. **Fibonacci Series:**
// Create a program that generates the Fibonacci series up to a certain number of terms.
//  For example, generate the Fibonacci series with 10 terms: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.

#include <stdio.h>

int main(){
    int a = 1;
    int b = -1;
    int user = 10;
    int c;
    

    for (int i = 0; i <= user; i++)
    {
       c = a + b;
       b = a;
       a = c;

       printf("%d \n",c);
    }
    
}
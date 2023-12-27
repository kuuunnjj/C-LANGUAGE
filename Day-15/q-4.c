// 4. **Fibonacci Series:**
// Create a program that generates the Fibonacci series up to a certain number of terms.
//  For example, generate the Fibonacci series with 10 terms: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.

#include <stdio.h>

int main(){
    int a = 0;
    int b = 1;
    int user = 10;
    int first,second,store;
    

    printf("%d \n",a);
    printf("%d \n",b);

    for (int i = 0; i <= user; i++)
    {
       store = a + b;
       b = a;
       a = store;

       printf("%d \n",store);
    }
    
}
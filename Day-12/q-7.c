// Q7. Find Even Numbers from 50 to 10.

#include <stdio.h>

int main(){
    int a = 50;
    int b = 10;

    while (a>=b)
    {
        if (a%2 == 0)
        {
            printf("%d \n",a);
        }
        a--;
    }
    
}
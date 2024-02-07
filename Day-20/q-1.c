// 1. **Find the maximum element in an array.**
// - Write a program to find the largest element present in an array of integers.

#include <stdio.h>

int main(){
    int maxbox[4];
    int store;

    for (int i = 0; i <= 3; i++)
    {
        printf("ENTER VALUE : ");
        scanf("%d",&maxbox[i]);
    }

    for (int i = 0; i <= 3; i++)
    {
        if (store > maxbox[i])
        {
            store = maxbox[i];
        }
        
    }
    printf("MAX VALUE : %d",store);
    
}
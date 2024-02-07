// Q.1 Write a Program to convert the given string in uppercase without using any string function.
// For example,
// Input:
// Enter any string: hello world

// Output:
// Uppercase string: HELLO WORLD

#include <stdio.h>

int main(){

    char box[] = "hello world";

    for (int i = 0; box[i] != NULL; i++)
    {
        if (box[i] >= 'a' && box[i] <= 'z')
        {
            box[i] -= 32;
            
        }
        printf("%c",box[i]);
    }
    
}
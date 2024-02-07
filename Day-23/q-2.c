// Q.2 Write a Program to convert the given string in lowercase without using any string function.
// For example,
// Input:
// Enter any string: HELLO WORLD

// Output:
// Lowercase string: hello world

#include <stdio.h>

int main(){
    char box[] = "HELLO WORLD";

    for (int i = 0; box[i] != NULL; i++)
    {
        if (box[i] >= 'A' && box[i] <= 'z')
        {
            box[i] += 32;
        }
        printf("%c",box[i]);
    }
    
}
// Q.3 Write a Program to convert the given string in toggle case without using any string function.
// For example,
// Input:
// Enter any string: HelLo worLD

// Output:
// Toggle case string: hELlO WORld

#include <stdio.h>

int main(){
    char box[] = "HelLo worLD";

    for (int i = 0; box[i] != NULL; i++)
    {
        if (box[i] >= 'a' && box[i] <= 'z')
        {
            box[i]-=32;
        }
        else if (box[i] >= 'A' && box[i] <= 'Z')
        {
            box[i]+=32;
        }
        printf("%c",box[i]);
    }
    
}
// **Question 3:**
// Write a C program to take a string input from the user and find its length.

#include <stdio.h>

int main(){
    
    char box[100];

    printf("ENTER TEXT : ");
    gets(box);

    printf("%d",strlen(box));
}
// **Question 1:**
// Write a C program to take a string input from the user and convert it to uppercase.

#include <stdio.h>

int main(){
    char box[100];

    printf("ENTER NAME : ");
    gets(box);

    printf("%s",strupr(box));
}
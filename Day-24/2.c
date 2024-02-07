// **Question 2:**
// Write a C program to take a string input from the user and convert it to lowercase.

#include <stdio.h>

int main(){
    char box[100];

    printf("ENTER NAME : ");
    gets(box);

    printf("%s",strlwr(box));
}
// Question 1: Write a C program to count the number of characters in a string
// entered by the user.

#include <stdio.h>

int main(){
    char user[100];

    printf("ENTER ANY STRING : ");
    gets(user);

    printf("STRING LENGTH : %d",strlen(user));
}
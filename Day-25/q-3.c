// Question 3: Implement a C program that compares two strings entered by
// the user and checks if they are equal. Print a message indicating whether the 
// strings are equal or not.

#include <stdio.h>

int main(){
    char firststring[100];
    char secondstring[100];

    // char fullstring[100];

    printf("ENTER FIRST STRING : ");
    gets(firststring);

    printf("ENTER SECOND STRING : ");
    gets(secondstring);

    if (strcmp(firststring,secondstring) == 0)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
}
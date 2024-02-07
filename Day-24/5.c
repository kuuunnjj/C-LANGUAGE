// **Question 5:**
// Write a C program to take two strings as input from the user and concatenate them. Display the concatenated string.

#include <stdio.h>

int main(){

    int firstname[100]; 
    int lastname[100]; 

    int fullname[100];

    printf("FIRST NAME : ");
    gets(firstname);
    
    printf("LAST NAME : ");
    gets(lastname);

    printf(strcpy(fullname,strcat(firstname,lastname)));
}
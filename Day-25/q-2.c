// Question 2: Write a C program that concatenates two strings entered by the user. 

#include <stdio.h>

int main(){

    char firststring[100];
    char secondstring[100];

    char fullstring[100];

    printf("ENTER FIRST STRING : ");
    gets(firststring);

    printf("ENTER SECOND STRING : ");
    gets(secondstring);

    printf("CONCATE : %s",strcpy(fullstring,strcat(firststring,secondstring)));
}
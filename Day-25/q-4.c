// Question 4: Write a C program that takes a string input from the user. 
// Reverse the input string and check if the reversed string is equal to the original 
// string. If they are equal, print "Palindrome". If they are not equal, print 
// "Not a palindrome".

#include <stdio.h>

int main(){
    char user[100];
    char user2[100];

    printf("ENTER ANY STRING : ");
    gets(user);

    strcpy(user2,user);

    printf("%s \n",strrev(user2));

    if (strcmp(user,user2)==0)
    {
        printf("yes");
    }
    else{
        printf("no");
    }
}
// // **Question 7:**
// // Write a C program to take two strings as input from the user
// //  and compare if they are equal. If they are equal, print "Strings are equal,
// " else print "No, they are not equal."

#include <stdio.h>

int main(){
    char ouremail[100] = "kunj8598@gmail.com";
    char ourpassword[100] = "KUNJ@1234";

    char ouremail1[100];
    char ourpassword1[100];

    printf("EMAIL : ");
    gets(ouremail1);

    printf("PASSWORD : ");
    gets(ourpassword1);

    if (strcmp(ouremail,ouremail1)==0 && strcmp(ourpassword,ourpassword1)==0)
    {
        printf("correct !");
    }
    else{
        printf("incorrect !");
    }

}
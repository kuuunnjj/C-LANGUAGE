// 4. Write a C program to print the following characters in reverse.
// Test Characters: 'X', 'M', 'L'
// Expected Output:
// The reverse of XML is LMX

#include <stdio.h>

int main(){
    char a = 'X';
    char b = 'M';
    char c = 'L';

    printf("Normal postion is : %c %c %c \n", a,b,c);
    printf("Recerse postion is : %c %c %c ", c,a,b);
}
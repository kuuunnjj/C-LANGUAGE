// 71. Write a C program to copy a given string into another and count the number of characters copied.
// Input a string
// Original string: w3resource
// Number of characters = 10

#include <stdio.h>

int main(){

   char box1[100];
   int ln = 0;

   printf("ENTER ANY STRING : ");
   gets(box1);

   for (int i = 0; box1[i] != NULL ; i++)
   {    
        ln++;
   }
   printf("Number of characters : %d",ln);
    
}
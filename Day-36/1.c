//1. **Question 1: Positive or Negative**
//    Write a C program to input a number and determine whether it's positive, negative, or zero.

#include <stdio.h>

int main(){
    int user;

    printf("ENTER ANY NUMBER : ");
    scanf("%d",&user);

    if (user == 0)
    {
        printf("ZERO");
    }
    else if (user > 0)
    {
        printf("POSTIVE");
    }
    else{
        printf("NAGATIVE");
    }
    
    
}
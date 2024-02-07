// 4. **Question 4: Leap Year Check**
//    Write a C program to check if a given year is a leap year or not.

#include <stdio.h>

int main(){
    int user;

    printf("ENTER ANY NUMBER : ");
    scanf("%d",&user);

    if (user%4 == 0)
    {
       printf("LEAP YEAR");
    }
    else{
        printf("NOT A LEAP YEAR");
    }
}
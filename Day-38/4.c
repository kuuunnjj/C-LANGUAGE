// 4. Write a C program to find the largest number among three numbers entered by the user.

#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter three numbers ==> \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("A IS LARGE !");
        }
        else{
            printf("C IS LARGE!");
        }
    }
    else{
        if(b > c){
            printf("B IS LARGE!");
        }
        else{
            printf("C IS LARGE!");
        }
    }
    
}
// 3. Write a C program to check whether a number entered by the user is even or odd.

#include <stdio.h>

int main(){
    int a;

    printf("Enter a number ==>");
    scanf("%d",&a);

    if(a%2 == 0){
        printf("EVEN!!");
    }
    else{
        printf("ODD!!");
    }
}
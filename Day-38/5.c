// 5. Write a C program to calculate the factorial of a number entered by the user.

#include <stdio.h>

int main(){
    int n;
    int sum = 1;

    printf("Enter a number == >");
    scanf("%d",&n);

    for(int i=1; i<n; i++){

        sum = sum*n;
        
    }
    printf("FACTORIAL ==> %d",sum);

    return 0;
}
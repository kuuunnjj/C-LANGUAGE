// 73. Write a C program that reads two integers and checks whether the first integer is a multiple of the second integer.
// Sample Input: 9 3
// Sample Output:
// Input the first integer : Input the second integer:
// 9 is a multiple of 3.

#include <stdio.h>


int main(){
    int x,y;

    printf("X : ");
    scanf("%d",&x);

    printf("Y : ");
    scanf("%d",&y);

    if (x%y == 0)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
}
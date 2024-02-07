// 2. **Question 2: Odd or Even**
//    Create a C program to check whether a given integer is odd or even.

#include <stdio.h>

int main(){
    int user;

    printf("ENTER ANY NUMBER : ");
    scanf("%d",&user);

    if (user%2 == 0)
    {
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
    
    
}
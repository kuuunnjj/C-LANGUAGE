// Q4. Write a program to find if person is eligible to vote.

// For example,
// Input:
// Enter your age: - 20

// Output:
// You can Vote
// -----------------------------------------------
// For example,
// Input:
// Enter your age: - 10

// Output:
// You cannot vote.
// -----------------------------------------------

// For example,
// Input:
// Enter your age: - 18

// Output:
// You can also vote.


#include <stdio.h>

int main(){
    int a;

    printf("Your age :");
    scanf("%d",&a);


    if (a>18)
    {
       printf("You can Vote");
    }
    else if (a<18)
    {
        printf("You cannot Vote");
    }
    else{
        printf("You can also vote.");
    }
    
}
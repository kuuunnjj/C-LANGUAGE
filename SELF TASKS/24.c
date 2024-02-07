// 21. Write a C program that reads an integer and checks the specified range to which it belongs. Print an error message if the number is negative and greater than 80.
// Test Data :
// Input an integer: 15
// Expected Output:
// Range [0, 20]

#include <stdio.h>

int main(){
    int user;

    printf("Enter any value : ");
    scanf("%d",&user);

    if (user >= 0 && user <= 20)
    {
        printf("RANGE : [0,20]");
    }
    else if (user >= 20 && user <= 40)
    {
        printf("RANGE : [21,40]");
    }
    else if (user >= 40 && user <= 60)
    {
        printf("RANGE : [41,60]");
    }
    else if (user >= 60 && user <= 80)
    {
        printf("RANGE : [61,80]");
    }
    else{
        printf("NOT IN THE RANGE");
    }
    
}
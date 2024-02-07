// 5. **Question 5: Pass/Fail**
//    Design a C program that takes a student's marks as input and prints "Pass" if the marks are greater than or equal to 40; otherwise, print "Fail."

#include <stdio.h>

int main(){
    int user;

    printf("ENTER ANY NUMBER : ");
    scanf("%d",&user);

    if (user >= 40)
    {
        printf("PASS");
    }
    else{
        printf("FAIL");
    }
}

// 8. Write a C program to convert specified days into years, weeks and days.
// Note: Ignore leap year.

// Test Data :
// Number of days : 1329
// Expected Output :
// Years: 3
// Weeks: 33
// Days: 3

#include <stdio.h>

int main(){
    int input;

    printf("Enter total days :");
    scanf("%d",&input);

    printf("Years : %d \n",input/365);
    printf("Weeks : %d \n", (input%365)/7);
    printf("Days : %d \n",((input%365)%7));

}
// 18. Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.
// Test Data :
// Input no. of days: 2535
// Expected Output:
// 6 Year(s)
// 11 Month(s)
// 15 Day(s)

#include <stdio.h>

int main(){
    float user,y,m,d;

    printf("Enter Days :");
    scanf("%f",&user);

    y = user/365;
    printf("YEAR : %d \n",(int)y);

    m = ((float)y-(int)y)*12;
    printf("MONTH : %d \n",(int)m);

    d = user-(((int)y*365)+((int)m*30));
    printf("DAY : %d \n",(int)d);

}
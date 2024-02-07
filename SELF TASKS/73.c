// 62. Write a C program that accepts a positive integer less than 500 and prints out the sum of the digits of this number.
// Input a positive number less than 500:
// Sum of the digits of 347 is 14

#include <stdio.h>

int main(){
    
    float x,a,a1,b1,c1,d;

    printf("enter value : ");
    scanf("%f",&x);

    a = x/100;
    a1 = (float)a-(int)a;


    b1 = (float)a1*10;

    c1 = (float)b1-(int)b1;
    c1 = c1*10;


    d = (int)a+(int)b1+(int)c1;
    printf("SUM OF DIGIT : %d",(int)d);
  
}
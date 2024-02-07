// 16. Write a C program to read an amount (integer value) and break the amount into the smallest possible number of bank notes.
// Test Data :
// Input the amount: 375
// Expected Output:
// There are:
// 3 Note(s) of 100.00
// 1 Note(s) of 50.00
// 1 Note(s) of 20.00
// 0 Note(s) of 10.00
// 1 Note(s) of 5.00
// 0 Note(s) of 2.00
// 0 Note(s) of 1.00

#include <stdio.h>

int main(){
    float amt , total;

    printf("ENTER : ");
    scanf("%f",&amt);

    total = amt/100;
    printf("notes of 100 : %d \n",(int)total);

 
    total = ((float)total-(int)total)*100;
    total = (float)total/50;
    printf("notes of 50 : %d \n",(int)total);


    total = ((float)total-(int)total)*50;
    total = (float)total/20;
    printf("notes of 20 : %d \n",(int)total);


    total = ((float)total-(int)total)*20;
    total = (float)total/10;
    printf("notes of 10 : %d \n",(int)total);


    total = ((float)total-(int)total)*10;
    total = (float)total/5;
    printf("notes of 5 : %d \n",(int)total);


    total = ((float)total-(int)total)*5;
    total = (float)total/2;
    printf("notes of 2 : %d \n",(int)total);


    total = ((float)total-(int)total)*2;
    total = (float)total/2 + total;
    printf("notes of 1 : %d \n",(int)total);


   
}


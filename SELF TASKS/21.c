// 17. Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
// Test Data :
// Input seconds: 25300
// Expected Output:
// There are:
// H:M:S - 7:1:40

#include <stdio.h>

int main(){
    float user,h,m,s;

    printf("Enter Value :");
    scanf("%f",&user);

    h = user/3600;
    m = ((float)h-(int)h)*60;
    s = ((float)m-(int)m)*60;
    
    printf("H:M:S - %d:%d:%d\n",(int)h,(int)m,(int)s);

   

    
    
    

}
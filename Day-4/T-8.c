#include <stdio.h>

int main(){
    float a,b,c,d,e;

    printf("1st value : ");
    scanf("%f",&a);

    printf("2nd value : ");
    scanf("%f",&b);

    printf("3rd value : ");
    scanf("%f",&c);

    printf("4th value : ");
    scanf("%f",&d);

    
    e = a+b+c+d;
    printf("Addition is %f \n", e);


    printf("Intiger addition is : %d", (int)e);




}
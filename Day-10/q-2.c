// Q.2 Write a Program to input electricity unit charges and calculate the total electricity bill according to the given condition:
// For the first 50 units Rs. 1/unit
// For the next 100 units Rs. 2/unit
// For the next 100 units Rs. 3/unit
// For units above 250 Rs. 4/unit
// An additional surcharge of Rs. 20 is added to the bill.

#include <stdio.h>

int main(){
    int unit;

    printf("Enter electricity units : ");
    scanf("%d",&unit);

    if (unit<=50)
    {
        unit = unit * 1;
        printf("BILL : %d",unit);
    }
    else if (unit<=150)
    {
        unit = (unit-50) * 2 + 50;
        printf("BILL : %d",unit);
    }
    else if (unit<=250)
    {
        unit = (unit - 150) * 3 + 250;
        printf("BILL : %d",unit);
    }
    else{
        unit = (unit - 250) * 4 + 550;
        printf("BILL : %d",unit);
    }

   
    printf("FINAL AMOUNT : %drs./unit",unit+20);

    
}
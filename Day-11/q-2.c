// Q.2 . Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
// For first 50 units Rs. 0.50/unit a
// For next 100 units Rs. 0.75/unit b
// For next 100 units Rs. 1.20/unit c
// For unit above 250 Rs. 1.50/unit d
// An additional surcharge of 20% is added to the bill.

// Enter the total units consumed: 300
// Total electricity bill: Rs. 354.00



#include <stdio.h>

int main(){

    int unit;

    printf("ENTER VALUE : ");
    scanf("%d",&unit);

    if (unit<=50)
    {
        unit = unit * 0.50;
        printf("BILL : %d",unit);
    }
    else if (unit<=150)
    {
        unit = (unit-50) * 0.75 + 25;
        printf("BILL : %d",unit);
    }
    else if (unit<=250)
    {
        unit = (unit-150) * 1.20 + 100;
        printf("BILL : %d",unit);
    }
    else{
        unit = (unit-250) * 1.50 + 220;
        printf("BILL : %d\n",unit);
    }
    
    printf("An additional surcharge added to the bill : %d",(unit*20)/100+unit);
}
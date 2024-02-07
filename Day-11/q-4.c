// **Question4:**

// Imagine you're building a simple coffee vending machine program in C. The user will input a number corresponding to their choice of coffee, and your program should display the name and price of the selected coffee. The menu includes:

// 1. Espresso - $2.50
// 2. Latte - $3.00
// 3. Cappuccino - $3.50
// 4. Americano - $2.75

// Write a C program that takes the user's choice as input, uses a `switch-case` statement to determine the selected coffee, and then displays the coffee name and its price.


#include <stdio.h>

int main(){
    int value;

    printf(" 1. Espresso - $2.50 \n 2. Latte - $3.00 \n 3. Cappuccino - $3.50 \n 4. Americano - $2.75 \n");

    printf("MENU DETAILS : ");
    scanf("%d",&value);

    switch (value)
    {
    case 1:
        printf("Espresso - $2.50");
        break;
    
    case 2:
        printf("Latte - $3.00");
        break;

    case 3:
        printf("Cappuccino - $3.50");
        break;

    case 4:
        printf("Americano - $2.75");
        break;
    
    default:
        printf("PLEASE ENTER A VALID NUMBER");
        break;
    }
}
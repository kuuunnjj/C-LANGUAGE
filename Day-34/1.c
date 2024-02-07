// Q1. 
// Develop a program that simulates a bank account using a structure named Account. Include members for account number, account holder name, balance, etc. 



#include <stdio.h>

struct  bankdetails{
    char ac_name[100];
    int ac_number;
    int ac_balance;
};



int main(){

    struct bankdetails door[1000];

    int store;
    printf("ENTER THE NUMBER OF MEMBERS : ");
    scanf("%d",&store);
    printf("-----------------------------------\n");

    for (int i = 0; i < store; i++)
    {
        printf("AC HOLDER NAME : ");
        scanf("%s",&door[i].ac_name);
        printf("AC NUMBER : ");
        scanf("%d",&door[i].ac_number);
        printf("AC BALANCE : ");
        scanf("%d",&door[i].ac_balance);
        printf("-----------------------------------\n");
    }

    for (int i = 0; i < store; i++)
    {   
        printf("-----------------------------------\n");
        printf("AC HOLDER NAME : %s\n",door[i].ac_name);
        printf("AC NUMBER : %d\n",door[i].ac_number);
        printf("AC BALANCE : %d\n",door[i].ac_balance);
    }
    
    
    
    
}
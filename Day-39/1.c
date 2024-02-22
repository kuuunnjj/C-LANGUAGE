// Q.1 Write a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF, switch case, and looping. Make sure that the program is endless until a certain letter is pressed.

#include <stdio.h>

int main(){

    int first, second, perform;

    do
    {

    printf("Press 1 for + \n");
    printf("Press 2 for - \n");
    printf("Press 3 for * \n");
    printf("Press 4 for / \n");
    printf("Press 5 for % \n");
    printf("Press 0 for end the program \n");

    
    printf("ENTER THE OPERATION ==> ");
    scanf("%d",&perform);

    if (perform != 0)
    {

    printf("ENTER THE FIRST VALIE ==> ");
    scanf("%d",&first);

    printf("ENTER THE SECOND VALIE ==> ");
    scanf("%d",&second);

  

    switch(perform){
        case 1 : printf("SUM ==> %d \n\n",first+second);
        break;
        case 2 : printf("SUBSTRACT ==> %d \n\n",first-second);
        break;
        case 3 : printf("MULTIPICATION ==> %d \n\n",first*second);
        break;
        case 4 : printf("DIVISION ==> %d \n\n",first/second);
        break;
        case 5 : printf("MODULER ==> %d \n\n",first%second);
        break;
        default : printf("PROGRAM ENDED !! \n\n");
        break;
    }
    }

    } while (perform != 0);


    

}
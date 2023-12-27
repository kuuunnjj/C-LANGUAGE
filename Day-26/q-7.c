// Create a C program that defines a function printTable() which takes no arguments and prints the multiplication table of 5 from 1 to 10. Call this function from the main() function.

#include <stdio.h>
void homemadetable(int jenujoie){
    for (int chalu = 1; chalu <= 10; chalu++)
    {
        printf("%d x %d = %d \n",jenujoie,chalu,chalu*jenujoie);
    }
    
}
void main(){
    int kenujoi;
    printf("KETLAMU TABLE JOI : ");
    scanf("%d",&kenujoi);

    homemadetable(kenujoi);
}
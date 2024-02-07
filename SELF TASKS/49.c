#include <stdio.h>

int main(){

    char box1[100];
    char box2[100];

    printf("ENTER ANY STRING : ");
    gets(box1);

    strcpy(box2,box1);

    strrev(box2);

    if (strcmp(box1,box2) == 0)
    {
        printf("Y");
    }
    else{
        printf("N");
    }







}
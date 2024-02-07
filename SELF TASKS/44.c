#include <stdio.h>

int main(){
    
    char box[100]= "KUNJ";

    for (int i = 0; i != NULL; i++)
    {
        if (box[i] <= 'A' && box[i] <= 'Z')
        {
            box[i]+=32;
        }
        printf("%c",box[i]);
    }
    



}
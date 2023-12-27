// 5. Write a program in [programming language of choice] that accepts user 
// input to populate a 1D array and then finds all the even numbers within the array, 
// computing their product.

#include <stdio.h>

int main(){
    int box[5];
    int product=1;

    for (int i = 0; i <= 4; i++)
    {
        printf("ENTER VALUE : ");
        scanf("%d",&box[i]);
    }
    for (int i = 0; i <= 4; i++)
    {
        if (box[i]%2 == 0)
        {   
            
            printf("EVEN NUMBERS : %d \n\n",box[i]);
            product *= box[i];
        }
        
    }
    printf("EVEN NUMBERS PRODUCT : %d",product);
    
}
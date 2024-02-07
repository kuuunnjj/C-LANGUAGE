#include <stdio.h>

int main(){

    int size;

    printf("size : ");
    scanf("%d",&size);

    int box[size];
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        printf("value : ");
        scanf("%d",&box[i]);
    }
    
    for (int i = 0; i < size; i++)
    {
        sum += box[i];
    }
    printf("sum is %d",sum);
}
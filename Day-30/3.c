// **Task 4: Find Minimum Using Return Pointer Variable**

#include <stdio.h>

int main(){

    int a,b;

    printf("ENTER A : ");
    scanf("%d",&a);
    printf("ENTER B : ");
    scanf("%d",&b);

    int *aa = &a;
    int *bb = &b;
 
    if (*aa < *bb)
    {
        printf("A IS MIN");
    }
    else{
        printf("B IS MIN");
    }
    
}
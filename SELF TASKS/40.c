#include <stdio.h>

int main(){
    int ghadiyo,ketlanojoi;

    printf("NAKHO : ");
    scanf("%d",&ketlanojoi);

    for (int ghadiyo = 10; ghadiyo >= 1; ghadiyo--)
    {
        printf("%d x %d = %d \n",ketlanojoi,ghadiyo,ketlanojoi*ghadiyo);
    }
    

}
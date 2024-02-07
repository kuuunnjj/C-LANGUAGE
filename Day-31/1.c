    // Q1. Swap 4 numbers using pointer.


    #include <stdio.h>

    int main(){
        int a,b,c,d;

        printf("A : ");
        scanf("%d",&a);
        printf("B : ");
        scanf("%d",&b);
        printf("C : ");
        scanf("%d",&c);
        printf("D : ");
        scanf("%d",&d);

        int *ap=&b;
        int *bp=&c;
        int *cp=&d;
        int *dp=&a;

        
        printf("A : %d\n",*ap);
        printf("B : %d\n",*bp);
        printf("C : %d\n",*cp);
        printf("D : %d\n",*dp);


    }
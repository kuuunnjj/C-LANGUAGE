// Q.3 Write a Program to find the maximum number from the given 4 numbers using nested if else. Also, draw a Flowchart in your book.
// For example,
// Input:
// Enter a value of the first number: 8
// Enter a value of the second number: 3
// Enter a value of the third number: 12
// Enter a value of the third number: 30

// Output:
// The maximum value is: 30


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

   if (a>b)
   {
        if (a>c)
        {
            if (a>d)
            {
               printf("A is Max : %d",a);
            }
            else{
                printf("D is Max : %d",d);
            }
            
        }
        else{
           if (c>d)
           {
             printf("C is Max : %d",c);
           }
           else{
            printf("D is Max : %d",d);
           }
            
        }
        
   }
   else{
        if (b>c)
        {
           if (b>d)
           {
            printf("B is Max : %d",b);
           }
           else{
            printf("D is Max : %d",d);
           }
        }
        else{
            if (c>d)
            {
                printf("C is Max %d",c);
            }
            else{
                printf("D is Max %d",d);

            }
        }
   }
   
}
// 3. **Question 3: Largest among Three Numbers**
//    Develop a C program that takes three numbers as input and finds the largest among them.

#include <stdio.h>

int main(){
    int a,b,c;

    printf("FIRST : ");
    scanf("%d",&a);
    printf("SECOND : ");
    scanf("%d",&b);
    printf("THIRD : ");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("A");
    }
    else if (b>c)
    {
        printf("B");
    }
    else{
        printf("C");
    }
    
}
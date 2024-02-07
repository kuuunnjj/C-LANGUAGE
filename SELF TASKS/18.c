#include <stdio.h>

int main(){
    int a,b,c,d,e;

    printf("A : ");
    scanf("%d",&a);

    printf("B : ");
    scanf("%d",&b);

    printf("C : ");
    scanf("%d",&c);

    printf("D : ");
    scanf("%d",&d);

    printf("E : ");
    scanf("%d",&e);

   
    if (a<b)
    {
        if (a<c)
        {
            if (a<d)
            {
                if (a<e)
                {
                    printf("A is Min : %d",a);
                }
                else{
                    printf("E is Min : %d",e);
                }  
            }
            else{
                if (d<e)
                {
                    printf("D is Min : %d",d);
                }
                else{
                    printf("E is Min : %d",e);
                }
            }  
        }
        else{
            if (c<d)
            {
                printf("C is Min : %d",c);
            }
            else{
                printf("D is Min : %d",d);
            }
        }
        
    }
    else{
        if (b<c)
        {
            if (b<d)
            {
                if (b<e)
                {
                    printf("B is Min : %d",b);
                }
                else{
                    printf("E is Min : %d",e);
                }
            }
            else{
                if (d<e)
                {
                    printf("D is Min : %d",d);
                }
                else{
                    printf("E is Min : %d",e);
                }
            }  
        }else{
            if (d<e)
            {
                printf("D is Min : %d",d);
            }
            else{
                printf("E is Min : %d",e);
            }
            
        }
        
    }
    
    
}
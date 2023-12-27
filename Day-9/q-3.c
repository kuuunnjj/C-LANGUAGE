// Q.3 Write a Program to create a menu-driven program for Telecom call service conversation using nested switch case.

#include <stdio.h>

int main(){

    int a,b;

    printf("Press 1 for English \n");
    printf("Press 2 for Hindi \n");
    printf("Press 3 for Gujarati \n");

    scanf("%d",&a);

    switch (a)
    {
    case 1:
        printf("Press 1 for Internet Recharge \n");
        printf("Press 2 for Top-up Recharge \n");
        printf("Press 3 for Special Recharge \n");

        scanf("%d",&b);

        switch (b)
        {
        case 1:
            printf("You have successfully done Internet Recharge. \n");
            break;
        
        case 2:
            printf("You have successfully done Top-up Recharge. \n");
            break;

        case 3:
            printf("You have successfully done Special Recharge. \n");
            break;


        
        default:
            printf("Invalid !");
            break;
        }
    
    break;
    case 2:
        printf("Internet Recharge ke liye 1 dabaiye \n");
        printf("Top-up Recharge ke liye 2 dabaiye \n");
        printf("Special Recharge ke liye 3 dabaiye \n");

        scanf("%d",&b);

        switch (b)
        {
        case 1:
            printf("Aapne safaltapurvak Internet Recharge kar liya he. \n");
            break;
        
        case 2:
            printf("Aapne safaltapurvak Top-up Recharge kar liya he. \n");
            break;

        case 3:
            printf("Aapne safaltapurvak Special Recharge  kar liya he \n");
            break;
        
        default:
            printf("Invalid !");
            break;
        }
    
    break;
     case 3:
        printf("Internet Recharge mate 1 dabavo \n");
        printf("Top-up Recharge mate 2 dabavo \n");
        printf("Special Recharge mate 3 dabavo \n");

        scanf("%d",&b);

        switch (b)
        {
        case 1:
            printf("Tame safaltapurvak Internet Recharge karyu chhe. \n");
            break;
        
        case 2:
            printf("Tame safaltapurvak Top-up Recharge karyu chhe. \n");
            break;

        case 3:
            printf("Tame safaltapurvak Special Recharge karyu chhe. \n");
            break;
        
        default:
            printf("Invalid !");
            break;
        }
    
    break;
    
    default:
        printf("Invalid !");
        break;
    }


}
// 3. Reverse a given number using loops:
// Enter an integer: 12345
// Reversed Number: 54321

#include <stdio.h>

int main(){
    int user,a;
    int sum = 0;

    printf("ENTER VALUE : ");
    scanf("%d",&user);

    while (user > 0)
    {
        a = user % 10; 
        sum += a; 
        user = user/10;
    }
     printf("%d",sum);
    
}
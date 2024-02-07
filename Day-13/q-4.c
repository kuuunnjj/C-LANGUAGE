// Q.4 Write a Program to print the fibonacci series up to N numbers using for loop.
// For example,
// Input:
// Enter any number: 8

// Output:
// 0, 1, 1, 2, 3, 5, 8, 13

// #include <stdio.h>
// int main(){
   
//    int user;

//    printf("Enter any number : ");
//    scanf("%d",&user);

//    int a = 1, b = -1, c = 0;

//    for (int i = 0; i <= user; i++)
//    {
//       c = b;
//       b = a;
//       a = c + b;
//       printf("%d\t",a);

//    }
   
// }


#include <stdio.h>

int main(){
   
   int user;

   printf("Enter any number : ");
   scanf("%d",&user);
   
   int first = 1; 
   int second = -1;
   int next = 0;



   for (int i = 0; i <= user; i++)
   {
      next = second;
      second = first;
      first = second + next;

      printf("%d \t",first);
   }
   
}

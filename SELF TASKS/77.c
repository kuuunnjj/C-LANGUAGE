// 65. Write a C program that prints out the prime numbers between 1 and 200. The output should be such that each row contains a maximum of 20 prime numbers.
// Expected output:
// The prime numbers between 1 and 199 are:
// 2 3 5 7 11 13 17 19 23 29
// 31 37 41 43 47 53 59 61 67 71
// 73 79 83 89 97 101 103 107 109 113
// 127 131 137 139 149 151 157 163 167 173
// 179 181 191 193 197



#include <stdio.h>

int main(){
    
    int a = 2;
    int count;
    
    for (int i = 2; i <= 199; i++)
    {
        count = 1;
        
        for (int a = 2; a <= i/2; a++)
        {
            if (i%a == 0)
            {
                count++;
            }
        }
        
         if (count < 2)
            {
               printf("%d \t",i);
            }
            
        
    }
    
}









// #include <stdio.h>

// int main(){

//   int input,new = 0;

//   printf("ENTER ANY NUMBER : ");
//   scanf("%d",&input);

//   for (int i = 1; i <= input; i++)
//   {
//        if (input%i == 0)
//        {
//             new++;
//        }
//   }

//         if (new > 2)
//         {
//             printf("NOT PRIME");
//         }
//         else{
//             printf("PRIME");
//         }
// }
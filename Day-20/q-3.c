// 3. **Reverse an array.**
//- Implement a function to reverse the elements of an array.


#include <stdio.h>

int main(){
    int box[4];

    for (int i = 0; i <= 3; i++)
    {
        printf("ENTER VALUE : ");
        scanf("%d",&box[i]);
    }

    for (int i = 3; i >= 0; i--)
    {
        printf("REVERSE : %d \n",box[i]);
    }


}


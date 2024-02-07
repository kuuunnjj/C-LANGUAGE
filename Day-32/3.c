// Q3Make enum of week.

#include <stdio.h>

enum week{
    MONDAY,TUESDAY,WEDNESDAY,THRUSDAY,FRIDAY,SATURDAY,SUNDAY
};

int main(){
    
    for (int i = MONDAY; i <= SUNDAY; i++)
    {
        printf("%d \n",i);
    }
    
}
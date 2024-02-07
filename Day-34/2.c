// Q2. Create an enum for music player controls (Play, Pause, Stop, Next, Previous). print index value of each.


#include <stdio.h>
enum player{
    play,pause,stop,next,previous
};

int main(){

    for (int i = play; i <= previous; i++)
    {
        printf("%d \n",i);
    }
}
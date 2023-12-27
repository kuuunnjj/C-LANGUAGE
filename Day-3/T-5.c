#include <stdio.h>

int main()
{

    int maths, science, english;

    printf("Maths : ");
    scanf("%d", &maths);

    printf("Science : ");
    scanf("%d", &science);

    printf("english : ");
    scanf("%d", &english);

    int a1 = maths + science + english;
    int average = a1 / 3;

    printf("Average is : %d", average);
}
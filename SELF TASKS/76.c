// 64. Write a C program that accepts integers from the user until a zero or a negative number, displays the number of positive values, the minimum value, the maximum value, and the average value.
// Input a positive integer:
// Input next positive integer: 15
// Input next positive integer: 25
// Input next positive integer: 37
// Input next positive integer: 43
// Number of positive values entered is 4
// Maximum value entered is 43
// Minimum value entered is 15
// Average value is 30.0000


#include <stdio.h>

int main()
{
    int size, Positive = 0, Negative = 0, sum = 0;

    printf("SIZE : ");
    scanf("%d", &size);

    printf("--------------------------------\n");

    int box[size];

    for (int i = 0; i < size; i++)
    {
        printf("value : ");
        scanf("%d", &box[i]);
    }
    int max = 0;
    int min;

    for (int i = 0; i < size; i++)
    {
        if (box[i] <= 0)
        {
            Negative++;
        }

        else
        {

            if (max < box[i])
            {
                max = box[i];
            }

            if (min > box[i])
            {
                min = box[i];
            }

            if (box[i] >= 0)
            {
                Positive++;
                sum += box[i];
            }
        }
    }
    printf("--------------------------------\n");

    printf("POSITIVE VALUE : %d \n", Positive);
    printf("NEGATIVE VALUE : %d \n", Negative);
    printf("MAXIMUM %d \n", max);
    printf("MINIMUM %d \n", min);
    printf("AVR %.2f \n", (float)sum / Positive);
}
#include <stdio.h>

int main(void)
{
    int marks[5], sum, i;
    float avg;

    // Read
    for (i = 0; i < 5; i++)
    {
        printf("Enter number for index %d: ", i);
        scanf("%d", &marks[i]);
    }

    // sum
    for (i = 0; i < 5; i++)
    {
        sum += marks[i];
    }

    // average
    avg = sum/5;

    printf("\nTotal:\n");
    printf("Sum: %d\n", sum);
    printf("Average: %.2f", avg);
    
    return (0);
}
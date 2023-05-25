#include <stdio.h>

int main(void)
{
    int number;

    printf("   Program to check whether a given number is negative or positive\n");
    printf("-----------------------------------------\n");

    printf("Enter a Number: ");
    scanf("%d", &number);

    if (number < 0)
        printf("%d is a negative number", number);
    else
        printf("%d is a positive number", number);

    return (0);
}
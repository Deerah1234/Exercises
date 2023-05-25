#include <stdio.h>

int main(void)
{
    int number;

    printf("   Program to check whether a given number is even or odd\n");
    printf("-----------------------------------------\n");

    printf("Enter a Number: ");
    scanf("%d", &number);


    if (number % 2 == 0)
        printf("%d is an Even integer\n", number);
    else
        printf("%d is an Odd integer\n", number);
    return (0);
}
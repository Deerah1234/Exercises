#include <stdio.h>

int main(void)
{
    double fahrenheit, celTemp;

    printf("\nA program that convert fahrenheit to Celsius\n");
    printf("-----------------------------------------\n");

    printf("Enter Fahreheit: ");
    scanf("%lf", &fahrenheit);

    celTemp = (fahrenheit - 32) / 1.8;

    printf("Answer:\n");
    printf("Celsius: %lf", celTemp);

    return (0);
}
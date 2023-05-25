#include <stdio.h>

int main(void)
{
    double celsius, fahTemp;

    printf("A program that convert Celsius to fahrenheit\n");
    printf("-----------------------------------------\n");

    printf("Enter celcsius: ");
    scanf("%lf", &celsius);

    fahTemp = celsius * 1.8 + 32.0;

    printf("Answer:\n");
    printf("Fahrenheit: %lf", fahTemp);

    return (0);
}
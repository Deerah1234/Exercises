#include <math.h>
#include <stdio.h>

int is_prime(int);

int main(void)
{
    int number = 5000;

    if (is_prime(number) == 1)
        printf("%d: is prime", number);
    else
        printf("%d: is not prime", number);
    return (0);
}

int is_prime(int number) 
{
    int counter;
    if (number < 2)
        return 0;
    else if (number == 2)
        return 1;
    else if (number % 2 == 0)
        return 0;

    
    for (counter = 3; counter <= number/2; counter++)
    {
        if (number % counter == 0) {
            return 0;
        }
    }

    return 1;
}
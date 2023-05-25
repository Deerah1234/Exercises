#include <stdio.h>

// 5! = 5 * 4 * 3 * 2 * 1
int main(void)
{
    /* Write a program to find the factorial */
    int num, fac = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (size_t i = num; i > 0; i--)
    {
        printf("%d ", i);
        fac *= i;
    }

    printf("\n%d", fac);
    
    return (0);
}
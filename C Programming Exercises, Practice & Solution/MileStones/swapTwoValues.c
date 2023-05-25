#include <stdio.h>

int main(void)
{
    int a = 10, b = 20, temp;

    printf("Before:\na = %d\nb = %d", a, b);
    
    temp = a;
    a = b;
    b = temp;

    printf("\nAfter:\na = %d\nb = %d", a, b);
    return (0);
}
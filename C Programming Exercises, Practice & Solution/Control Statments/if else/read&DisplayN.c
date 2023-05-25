#include <stdio.h>

int main(void)
{
    int m, n;

    printf("   Program to read an integer m and display the value of n\n");
    printf("-----------------------------------------\n");

    printf("Enter a Number: ");
    scanf("%d", &m);

    if (m != 0)
    {
        if (m > 0)
            n = 1;
        else
            n = -1;
    }
    else
       n = 0;
    
    printf("The value of m = %d\n", m);
    printf("The value of n = %d", n);
    
    return (0);
}
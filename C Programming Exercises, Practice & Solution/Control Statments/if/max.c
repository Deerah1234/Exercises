#include <stdio.h>

int main(void)
{
    int a = 1, b = 2, c = 3;
    int max;

    if (a > b)
    {
        if (a > c)
            printf("a is max");
    }
    if (b > a)
    {
        if (b > c)
            printf("b is max");
    }
    if (c > a)
    {
        if (c > b)
            printf("c is max");
    }
    
    return (0);
}
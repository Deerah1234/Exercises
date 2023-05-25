#include <stdio.h>

int main(void)
{
    for (int i = 5, a = 1; i > 0, a < 5; i--, a++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k < a; k++)
        {
            printf("* ");
        }
        for (int m = 0; m < a; m++)
        {
            printf("* ");
        } 
        printf("\n");
    }
    
    return (0);
}
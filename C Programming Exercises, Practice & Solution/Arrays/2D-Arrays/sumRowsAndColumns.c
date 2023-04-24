#include <stdio.h>

int main(void)
{
    int a[2][3], i, j;
    int rsum = 0, csum = 0;

    /* Read */
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter number at row %d and column %d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    /* Printing the matrix */
    printf("Matrix a - %dx%d\n", i, j);
    printf("-------------------\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    /* Logic - rows sum */
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            rsum += a[i][j];
        }
    }

    /* Logic - columns sum */
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            csum += a[j][i];
        }
    }

    /* printing - rsum and csum */
    printf("Answer: \n");
    printf("---------\n");
    printf("Rows sum = %d\n", rsum);
    printf("Columns sum = %d", csum);
    
    return (0);
}
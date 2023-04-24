#include <stdio.h>

int main(void)
{
    int a[2][3], b[2][3], i, j;

    // Read
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter number at row %d and column %d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("The Orginal matrix %dx%d\n", i, j);
    printf("---------------------------------\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("The Transpose matrix %dx%d\n", j, i);
    printf("--------------------------------\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            b[i][j] = a[j][i];
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    
    return (0);
}
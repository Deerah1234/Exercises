#include <stdio.h>
#define N 50

int main(void)
{

    int arr1[N][N], arr2[N][N], arr3[N][N], i, j, m, n, p, q, k, sum;

    // Chossing row size and column size for arr1 (m - row, n - column)
    printf("Enter the row for Array1: ");
    scanf("%d", &m);
    printf("Enter the column for Array1: ");
    scanf("%d", &n);

    // Writing to arr1
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter number for Array1 at row %d & column %d: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    
    // Chossing row size and column size  for arr2 (p - row, p - column)
    printf("Enter the row for Array2: ");
    scanf("%d", &p);
    printf("Enter the column for Array2: ");
    scanf("%d", &q);

    // Writing to arr2
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("Enter number for Array2 at row %d & column %d: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    // print arr1
    printf("\nArray 1 is %dx%d", m, n);
    printf("\n-----------------\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }
    
    // print arr2
    printf("\nArray 2 is %dx%d", p, q);
    printf("\n-----------------\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }

    // Logic
    if (n != p)
    {
        printf("Can not multiply");
    }
    else
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                sum = 0;
                for (k = 0; k < m; k++)
                {
                    sum += arr1[i][k] * arr2[k][j];
                }
                arr3[i][j] = sum;
            }
        }
    }

    // print arr3
    printf("\nThe multipliation is %dx%d", m, q);
    printf("\n--------------------------\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d\t", arr3[i][j]);
        }
        printf("\n");
    }
    return (0);
}
#include <stdio.h>

int main(void)
{
    int arr[2][3], i, j, sum = 0;

    // Read
    printf("Enter elements for Array1\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
           printf("number for row %d and column %d: ", i, j);
           scanf("%d", &arr[i][j]);
        }
    }

    // print arr
    printf("\nArray1:\n");
    printf("-----------\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    
    // sum
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
    }

    printf("Answer:\n");
    printf("--------\n");
    printf("Sum: %d", sum);
    
    return (0);
}
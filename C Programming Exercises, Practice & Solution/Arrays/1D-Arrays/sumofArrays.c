#include <stdio.h>

int main(void)
{
    int arr1[5], arr2[5], sumArr[5], i;

    // Read arr1
    printf("Enter for Array1:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Enter number for index %d: ", i);
        scanf("%d", &arr1[i]);
    }

    // Read arr2
    printf("Enter for Array2:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Enter number for index %d: ", i);
        scanf("%d", &arr2[i]);
    }

    // sum
    for (i = 0; i < 5; i++)
    {
        sumArr[i] = arr1[i] + arr2[i];
    }

    // print sum
    printf("\nAnswer:\n");
    printf("------\n");
    for (i = 0; i < 5; i++)
    {
        printf("Sum of %d + %d: %d \n", arr1[i], arr2[i], sumArr[i]);
    }

    return (0);
}
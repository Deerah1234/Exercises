#include <stdio.h>

int main(void)
{
    int a[50];
    int size, pos;

    /* The size of array */
    printf("Enter the size of array: ");
    scanf("%d", &size);

    /* Input elements to array */
    for (size_t i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }

    /* The array */
    printf("Before Deletion\n");
    printf("----------------------\n");
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    
    /* Position to be deleted */
    printf("\nPosition you want to delete: ");
    scanf("%d", &pos);

    /* logic */
    if (pos <= 0 || pos > size)
        printf("Invalid position\n");
    else
    {
        for (size_t i = pos-1; i < size-1; i++)
        {
            a[i] = a[i+1];
        }
        size--;

        printf("After Deletion\n");
        printf("----------------------\n");
        for (size_t i = 0; i < size; i++)
        {
            printf("%d ", a[i]);
        }     
    }
    return (0);
}
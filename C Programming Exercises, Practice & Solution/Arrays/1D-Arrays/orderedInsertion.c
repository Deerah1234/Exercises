#include <stdio.h>

int main(void)
{
    int arr[50], size, num, pos;

    printf("A program to Insert a number in a specific position\n");
    printf("------------------------------------------------------\n");

    /* Size of array */
    printf("Enter size of array: ");
    scanf("%d", &size);

    /* Insert numbers in array */
    for (size_t i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Before insertion: size = %d\n", size);
    printf("---------------------------------------------------------\n");
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    
    /* Number to be inserted */
    printf("\nEnter number to be inserted in array: ");
    scanf("%d", &num);

    /* Position where the number will be inserted */
    printf("At what postion do you want to insert?\n->: ");
    scanf("%d", &pos);

    /* Insert number in postion */
    for (size_t i = size-1; i >= pos-1; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos-1] = num;
    size++;

    printf("New Array: size = %d\n", size);
    printf("-------------------------------------------------------------\n");
    /* Travese the array */
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return (0);
}
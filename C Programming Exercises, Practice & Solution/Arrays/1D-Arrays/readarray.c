#include <stdio.h>

int main(void)
{
    int arr[5], i;
    
    // Read 
    for (i = 0; i < 5; i++)
    {
        printf("Enter number for index %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Print
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    return (0);
}
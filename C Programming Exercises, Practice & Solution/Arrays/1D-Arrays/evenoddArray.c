#include <stdio.h>

int main(void)
{
    int arr[10], even = 0, odd = 0, i;

    // Read the input from the user
    for (i = 0; i < 10; i++)
    {
        printf("Enter number for index %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    // Count the number of even and odd numbers
    for (i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    // Print the results
    printf("\nAnswer:\n");
    printf("--------\n");
    printf("Even: %d\n", even);
    printf("Odd: %d", odd);
    
    return (0);
}
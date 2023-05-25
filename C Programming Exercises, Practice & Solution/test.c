#include <stdio.h>

int main(void)
{
    int arr[] = {}, size;

    size = sizeof(arr) / sizeof(arr[0]);

    printf("%d", size);

    return (0);
}
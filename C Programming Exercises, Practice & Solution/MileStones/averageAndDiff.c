#include <stdio.h>
#define maxNum 100

int main(void)
{
    int arr[maxNum], a, n = 0, sum = 0;
    double avarage;

    printf("Enter up to 100 numbers (end with 0)\n");
    scanf("%d", &a);

    while (a != 0)
    {
        sum += a;
        arr[n++] = a;
        scanf("%d", &a);
    }

    if (n == 0) printf("No number taken\n");
    else
    {
        printf("Numbers entered: %d\n", n);
        printf("Sum of numbers: %d\n", sum);
        avarage = (double)sum / n;
        printf("The average is %.2f\n", avarage);
        printf("Numbers and differences from average\n");
        for (int i = 0; i < n; i++)
            printf("%d %.2f\n", arr[i], arr[i]-avarage);
    }

    return (0);
}
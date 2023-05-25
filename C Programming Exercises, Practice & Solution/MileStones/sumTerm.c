#include <stdio.h>

int main(void)
{
    float nth, a1, sum;
    int n;

    printf("Enter the Initial Term (a1): ");
    scanf("%f", &a1);
    printf("Enter the n-th term in the Arithmetic Sequence: ");
    scanf("%f", &nth);
    printf("Enter the number of elements in the Arithmetic Sequence: ");
    scanf("%d", &n);

    sum = (a1 + nth) * n/2;

    printf("The sum of the Arithmetic Sequence = %f\n", sum);
    return (0);
}
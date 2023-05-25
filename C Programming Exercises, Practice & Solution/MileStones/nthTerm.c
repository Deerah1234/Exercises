#include <stdio.h>

int main(void)
{
    float nth, a1, d;
    int n;

    printf("Enter the Initial Term (a1): ");
    scanf("%f", &a1);
    printf("Enter the difference in the Arithmetic Sequence: ");
    scanf("%f", &d);
    printf("Enter the number of elements in the Arithmetic Sequence: ");
    scanf("%d", &n);

    nth = a1 + (n-1) * d;

    printf("The n-th term of the Arithmetic Sequence = %f\n", nth);
    return (0);
}
#include <stdio.h>

// 0 1 1 2 3 5
int main(void)
{
    int fb = 0, sb = 1, sum = 0, nb;

    printf("%d ", fb);
    printf("%d ", sb);

    sum += (fb+sb);
    for (size_t i = 0; i < 4; i++)
    {
        nb = fb+sb;
        printf("%d ", nb);
        sum += nb;
        fb = sb;
        sb = nb;
    }

    printf("\n%d", sum);
    return (0);
}
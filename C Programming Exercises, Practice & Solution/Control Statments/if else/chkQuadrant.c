#include <stdio.h>

int main(void)
{
    int x, y;

    printf("   Program That determine which quadrant the coordinate point lies\n");
    printf("-----------------------------------------\n");

    printf("Enter Two coordinate: ");
    scanf("%d %d", &x, &y);

    if ((x > 0) && (y > 0))
        printf("The coordinate point (%d,%d) lies in the First quadrant", x, y);
    else if ((x < 0) && (y > 0))
        printf("The coordinate point (%d,%d) lies in the Second quadrant", x, y);
    else if ((x < 0) && (y < 0))
        printf("The coordinate point (%d,%d) lies in the Third quadrant", x, y);
    else if ((x > 0) && (y < 0))
        printf("The coordinate point (%d,%d) lies in the Forth quadrant", x, y);
    else if ((x == 0) && (y == 0))
        printf("The coordinate point (%d,%d) lies in the Origin", x, y);

    return (0);
}
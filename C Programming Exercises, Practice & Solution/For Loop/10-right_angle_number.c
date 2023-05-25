#include <stdio.h>

/*
 * main - Entry point
 *
 * Description: Prints the right angle traingle with a number.
 * 
 * Return: 0 (success)
 */
int main(void)
{
    int i, j, rows;

    printf("Input number of rows: ");
    scanf("%d", &rows);

    printf("The pattern like: \n");
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return (0);
}
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *iptr;
    float *fptr;

    iptr = (int *)calloc(5, sizeof(int));

    if (iptr == NULL)
    {
        printf("Not allocated");
        exit(1);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Enter value %d: ", i+1);
        scanf("%d", (iptr+i));
    }

    printf("\n====================\n");
    printf("The values are:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(iptr+i));
    }

    free(iptr);

    /*store float values*/

    fptr = (float *)malloc(10*sizeof(float));

    if (fptr == NULL)
    {
        printf("Not allocated");
        exit(1);
    }

    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter value %d: ", i+1);
        scanf("%f", (fptr+i));
    }

    printf("\n====================\n");
    printf("The values are:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%f ", *(fptr+i));
    }

    free(fptr);
    return (0);
}
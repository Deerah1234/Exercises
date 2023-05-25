#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[30];
    int roll;
};

int main(void)
{
    struct student *ptr;
    int n, i;

    printf("Enter total number of elements: ");
    scanf("%d", &n);

    ptr = (struct student *)malloc(n*sizeof(struct student));

    if (ptr == NULL)
    {
        printf("Insufficient Memory");
        return 1;
    }

    for (i = 0; i<n; i++)
    {
        printf("Enter name: ");
        scanf("%s", (ptr+i)->name); /* Clear input buffer */
        // gets((ptr+i)->name);
        printf("Enter roll number: ");
        scanf("%d", &(ptr+i)->roll);
    }

    for (i = 0; i<n; i++)
    {
        printf("%s %d\n", (ptr+i)->name, (ptr+i)->roll);
    }

    free(ptr);
    return (0);
}
#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[30];
};

int main(void)
{
    struct student *ptr = NULL;
    int n, i;

    printf("Enter numbers of student you want to store: ");
    scanf("%d", &n);

    ptr = (struct student *)calloc(n, sizeof(struct student));

    if (ptr == NULL)
    {
        printf("insuffient memory");
        exit(1);
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter name: ");
        scanf("%s", (ptr+i)->name);
    }

    printf("\n================\n");
    printf("The students are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d - %s\n", i+1, (ptr+i)->name);
    }
    free(ptr);
    return 0;

}
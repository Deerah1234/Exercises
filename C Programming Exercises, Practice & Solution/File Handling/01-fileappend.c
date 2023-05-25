#include <stdio.h>


int main(void)
{
    FILE *fp = NULL;
    char str[50];

    if ((fp = fopen("abc.txt", "a")) == NULL)
    {
        printf("Errror");
        return (1);
    }

    printf("Enter the content you want to be append: ");
    gets(str);

    fprintf(fp, "\n%s", str);
    printf("Successfully append!");
    fclose(fp);

    return (0);
}
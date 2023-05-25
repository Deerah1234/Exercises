#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    char ch;

    if ((fp = fopen("abc.txt", "r")) == NULL)
    {
        printf("Errror");
        return (1);
    }

    while (!feof(fp))
    {
        ch = fgetc(fp);
        printf("%c", ch);
    }
    fclose(fp);

    return (0);
}
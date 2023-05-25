#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    char str[10];

    if ((fp = fopen("abc.txt", "r")) == NULL)
    {
        printf("Errror");
        return (1);
    }

    while (!feof(fp))
    {
        fgets(str, 10, fp);
        printf("%s", str);
    }
    
    fclose(fp);

    return (0);
}
#include <stdio.h>


int main(void)
{
    FILE *fp = NULL;
    char str[50];

    if ((fp = fopen("abc.txt", "r")) == NULL)
    {
        printf("Errror");
        return (1);
    }

    while (!feof(fp))
    {
        fgets(str, 45, fp);
        printf("Hi %s we are thrilled to have you here.", str);
    }
    
    fclose(fp);

    return (0);
}
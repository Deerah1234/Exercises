#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    int count = 0, chcnt = 0;
    char ch, str[1024];
                    
    fp = fopen("abc.txt", "r");

    if (fp == NULL)
    {
        printf("Error");
        return (1);
    }

    while ((ch = fgetc(fp)) != EOF)
    // for (ch = fgetc(fp); ch != EOF; ch = fgetc(fp))
    {
        if (ch == '\n')
            count++;
        else
            chcnt++;
    }
    
    if (EOF)
        count++;

    printf("Number of lines are: %d\nNumber of Characters are: %d", count, chcnt);
    fclose(fp);

    return (0);
}
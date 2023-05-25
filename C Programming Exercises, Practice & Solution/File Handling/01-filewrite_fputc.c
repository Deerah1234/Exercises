#include <stdio.h>

int main(void)
{
    /* Declear a file pointer and initilize a charater variable */
    FILE *fp = NULL;
    char ch = 'a';

    /* Bound check to see if the file didn't open */
    if ((fp = fopen("abc.txt", "w")) == NULL)
    {
        printf("Error");
        return (1);
    }

    /* Write to the file and close it */
    fputc(ch, fp);
    fclose(fp);
    
    return (0);
}
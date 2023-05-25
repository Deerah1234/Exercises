#include <stdio.h>

int main(void)
{
    /* Declear a file pointer and initilize an charater variable */
    FILE *fp = NULL;
    char str[50] = "My name";

    /* Bound check to see if the file didn't open */
    if ((fp = fopen("abc.txt", "w")) == NULL)
    {
        printf("Error");
        return (1);
    }

    /* Write to the file and close it */
    fputs(str, fp);
    fclose(fp);
    
    return (0);
}
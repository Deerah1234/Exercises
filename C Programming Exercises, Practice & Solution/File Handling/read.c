#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    char fname[1024];
    char str[1024];

    printf("\nRead an existing file\n");
	printf("------------------------------\n"); 
    printf("Input the filename to be opened: ");
    scanf("%s", fname);

    fp = fopen(fname, "r");
    if (fp == NULL)
    {
        printf("Error opening file\n");
        return -1;
    }

    fgets(str, 1024, fp);
    printf("The contents of the file %s is:\n%s\n", fname, str);

    fclose(fp);

    return (0);
}
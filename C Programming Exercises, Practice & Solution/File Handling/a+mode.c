#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    char fname[50], buf[1024];
    int n, i;

    printf("========== Welcome to the magical file format =================\n");
    printf("Enter filename: ");
    scanf("%s", fname);

    if ((fp = fopen(fname, "a+")) == NULL)
    {
        printf("Error");
        return(1);
    }

    printf("Input the number of times to be written: ");
    scanf("%d", &n);

    printf("The lines are:\n");
    for (i = 0; i < n; i++)
    {
        printf("Content %d: ", i+1);
        scanf("%s", buf);
        fprintf(fp, "\n%s", buf);
    }

    /* Reading the file content */
    printf("\n------------------------\n");
    printf("The file contents are:\n");
    printf("============================\n");

    rewind(fp);
    
    while (!feof(fp))
    {
        fgets(buf, sizeof buf, fp);
        printf("%s", buf);
    }

    fclose(fp);

    return (0);
}
#include <stdio.h>

int main(void)
{
    FILE *fp1 = NULL, *fp2 = NULL;
    char ch1, ch2;    

    fp1 = fopen("abc.txt", "r");
    if (fp1 == NULL)
    {
        printf("Error");
        return (1);
    }

    fp2 = fopen("destination.txt", "w+");
    if (fp2 == NULL)
    {
        printf("Error");
        return (1);
    }

    while ((ch1 = fgetc(fp1)) != EOF)
    {
        fputc(ch1, fp2);
    }
    printf("Sucessful!\n");

    rewind(fp2);

    printf("========= Destination file contents ==============\n");
    while ((ch2 = fgetc(fp2)) != EOF)
    {
        printf("%c", ch2);
    }
    
    fclose(fp1);
    fclose(fp2);
    return (0);
}
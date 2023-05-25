#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    char str[1024];

    printf("\nCreate a file (test.txt) and input text :\n");
	printf("----------------------------------------------\n"); 

    if ((fp = fopen("test.txt", "w")) == NULL)
    {
        printf("error opening file\n");
        return -1;
    }

    printf("Input text : ");
    fgets(str, sizeof str, stdin);
    fprintf(fp, "%s", str);
    printf("The file test.txt created successfully...!!");
    fclose(fp);

    return (0);
}
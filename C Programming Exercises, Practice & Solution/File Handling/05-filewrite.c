#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    char name[50];
    int age;

    if ((fp = fopen("abc.txt", "w")) == NULL)
    {
        printf("Error");
        return (1);
    }

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your name: ");
    scanf("%s", name);

    fprintf(fp, "Hi, %s we are thrilled to have you here.\nYou are %d year old.", name, age);
    printf("File created successfully...!!!");

    fclose(fp);
    return (0);
}
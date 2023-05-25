#include <stdio.h>

struct student
{
    int rollnum;
    char name[20];
    float marks;
}s;

int main(void)
{
    struct student *ptr = &s;


    printf("A program to store student info\n");
    printf("------------------------------\n");

    printf("Enter your rollnum: ");
    scanf("%d", &ptr -> rollnum);

    printf("Enter your name: ");
    scanf("%s", ptr -> name);

    printf("Enter your marks: ");
    scanf("%f", &ptr -> marks);

    printf("Hey, %s your rollnum is %d and your marks is %.2f good luck!\n", ptr -> name, ptr -> rollnum, ptr -> marks);

    return (0);
}
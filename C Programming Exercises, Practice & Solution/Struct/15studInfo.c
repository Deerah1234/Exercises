#include <stdio.h>

struct student
{
    int rollno;
    char name[100];
    int age;
    char address[100];
    int marks;
};

int main(void)
{
    struct student stud[15];

    printf("Store and Print 15 Students infomations\n");
    printf("----------------------------\n");

    for (size_t i = 0; i < 15; i++)
    {
        printf("Student %d\n", i+1);
        printf("Enter rollno.: ");
        scanf("%d", &stud[i].rollno);
        printf("Enter name: ");
        scanf("%s", stud[i].name);
        printf("Enter age: ");
        scanf("%d", &stud[i].age);
        printf("Enter address: ");
        scanf("%s", stud[i].address);
        printf("Enter marks: ");
        scanf("%d", &stud[i].marks);
    }

    printf("Results\n");
    printf("------------\n");
    for (size_t i = 0; i < 15; i++)
    {
        printf("Student %d\n", i+1);
        printf("Roll no.: %d", stud[i].rollno);
        printf("Name: %s", stud[i].name);
        printf("Age: %d", stud[i].age);
        printf("Address: %s", stud[i].address);
        printf("Marks: %d", stud[i].marks);
    }
    
    return (0);
}
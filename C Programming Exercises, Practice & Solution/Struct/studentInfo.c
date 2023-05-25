#include <stdio.h>

struct student
{
    int rollno;
    char name[100];
    int age;
    int marks;
};

int main(void)
{
    struct student s;

    printf("Student Record\n");
    printf("------------------\n");

    printf("Enter your rollno: ");
    scanf("%d", &s.rollno);

    printf("Enter your name: ");
    scanf("%s", &s.name);

    printf("Enter your age: ");
    scanf("%d", &s.age);

    printf("Enter your marks: ");
    scanf("%d", &s.marks);

    printf("\nResult\n");
    printf("------------------\n");

    printf("Roll number: %d\n", s.rollno);
    printf("Name: %s\n", s.name);
    printf("age: %d\n", s.age);
    printf("marks: %d\n", s.marks);

    return (0);
}
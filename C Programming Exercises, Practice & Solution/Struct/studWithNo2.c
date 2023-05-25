#include <stdio.h>

struct students
{
    int rollno;
    char name[100];
    int age;
};


int main(void)
{
    int i;
    struct students stud[5];

    printf("Read and Print the 2nd Studnet\n");
    printf("-------------------------------\n");
    for (i = 0; i < 5; i++)
    {
        printf("Student %d\n", i+1);
        stud[i].rollno = i+1;
        printf("Enter name: ");
        scanf("%s", stud[i].name);
        printf("Enter age: ");
        scanf("%d", &stud[i].age);
    }

    for (i = 0; i < 5; i++)
    {
        if (stud[i].rollno == 2)
        {
            printf("Student %d\n", i+1);
            printf("--------------\n");
            printf("- Roll no.: %d\n", stud[i].rollno);
            printf("- Name: %s\n", stud[i].name);
            printf("- Age: %d\n", stud[i].age);
        }
    }
     
    return(0);
}
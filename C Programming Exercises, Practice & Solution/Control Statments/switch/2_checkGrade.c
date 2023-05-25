#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int grade;

    system("clear");

    printf("   Program to check Grade of a student\n");
    printf("------------------------------------------\n");

    printf("Enter Your grade: ");
    scanf("%d", &grade);

    switch (grade)
    {
        case 80 ... 100:
            printf("Your grade is A");
            break;
        case 70 ... 79:
            printf("Your grade is B");
            break;
        case 60 ... 69:
            printf("Your grade is C");
            break;
        default:
            printf("Your grade is D");
            break;
    }
    return (0);
}
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int grade;

    system("clear");

    printf("   Program to check Grade of a student   \n");
    printf("   ------------------------------------------------------\n");

    printf("Enter Your grade: ");
    scanf("%d", &grade);

    switch (grade/10)
    {
        case 10:
        case 9:
        case 8:
            printf("Your grade is A");
            break;
        case 7:
            printf("Your grade is B");
            break;
        case 6:
            printf("Your grade is C");
            break;
        default:
            printf("Your grade is D");
    }
    
    return (0);
}
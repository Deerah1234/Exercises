#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("   Program to check whether two intergers are equal or not\n");
    printf("-----------------------------------------\n");

    printf("Enter Two Numbers: ");
    scanf("%d %d", &num1, &num2);


    if (num1 == num2)
        printf("Number1 and Number2 are equal\n");
    else
        printf("Number1 and Number2 are not equal\n");
    return (0);
}
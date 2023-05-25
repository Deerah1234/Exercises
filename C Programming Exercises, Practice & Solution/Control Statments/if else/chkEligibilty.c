#include <stdio.h>

int main(void)
{
    int age;

    printf("   Program to check whether a candidate can cast a vote or not\n");
    printf("-----------------------------------------\n");

    printf("Enter Your age: ");
    scanf("%d", &age);

    if (age >= 18)
        printf("Congratulation! You are eligible for casting\n");
    else
        printf("Sorry! You are not eligible for casting\n");
    return (0);
}
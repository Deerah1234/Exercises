#include <stdio.h>

int main(void)
{
    int num1, num2, num3;

    printf("   Program to check maximun of three integers\n");
    printf("-----------------------------------------\n");

    printf("Enter Two Numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("1st Number = %d\n2nd Number = %d\n3rd Number = %d\n", num1, num2, num3);
    if (num1 > num2)
    {
        if (num1 > num3)
            printf("The 1st Number is  greatest among the three\n");
        else
            printf("The 3rd Number is  greatest among the three\n");
    }
    else if (num2 > num3)
        printf("The 2nd Number is  greatest among the three\n");
    else
        printf("The 3rd Number is  greatest among the three\n");
    
    return (0);
}
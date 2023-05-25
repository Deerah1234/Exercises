#include <stdio.h>

int main(void)
{
    int num1, num2, num3, max = 0;

    printf("   Program to check maximun of three integers\n");
    printf("-----------------------------------------\n");

    printf("Enter Two Numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if ((num1 > num2) && (num1 > num3))
        max = num1;
    if ((num2 > num3) && (num2 > num1))
        max = num2;
    if ((num3 > num1) && (num3 > num2))
        max = num3;
    
    printf("1st Number = %d\n2nd Number = %d\n3rd Number = %d\n", num1, num2, num3);
    printf("The %d Number is the greatest among the three", max);
    return (0);
}
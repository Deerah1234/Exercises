#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, num2;
    char opr;

    system("clear");
    
    printf("   Simple Calculator   \n");
    printf("----------------------- \n");

    printf("Enter operator(+,-,*,/)\n-> ");
    scanf("%c", &opr);
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    switch (opr)
    {
        case '+':
            printf("%d + %d = %d", num1, num2, num1+num2);
            break;
        case '-':
            printf("%d - %d = %d", num1, num2, num1-num2);
            break;
        case '/':
            printf("%d / %d = %d", num1, num2, num1/num2);
            break;
        case '*':
            printf("%d * %d = %d", num1, num2, num1*num2);
            break;
        default:
            break;
    }
    return (0);
}
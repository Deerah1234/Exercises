#include <stdio.h>

int main(void)
{
    char s[30];

    printf("Input the string: ");
    gets(s);
    printf("The string you entered is: %s", s);
    return (0);
}
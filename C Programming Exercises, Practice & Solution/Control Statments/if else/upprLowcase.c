#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch;

    system("clear");
    
    printf("   Program to check whether a character is Upper or Lower   \n");
    printf("   ------------------------------------------------------\n");

    printf("Enter a character to check: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
        printf("%c is Lowercase", ch);
    else if (ch >= 'A' && ch <= 'Z')
        printf("%c is Uppercase", ch);
    
    return (0);
}
#include <stdio.h>

int main(void)
{
    char s[30];
    size_t count = 0;

    printf("Input the string: ");
    gets(s);

    for (size_t i = 0; s[i] != '\0'; i++)
        count++;
    
    printf("Length of the string is: %d", count);
    return (0);
}
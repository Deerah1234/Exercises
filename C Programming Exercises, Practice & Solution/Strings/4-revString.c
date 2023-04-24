#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[30], ch;

    printf("Input the string: ");
    gets(s);

    size_t len = strlen(s);

    for (size_t i = 0; i < len/2; i++)
    {
        ch = s[i];
        s[i] = s[len-1-i];
        s[len-1-i] = ch;
    }

    printf("The characters of the strin in reverse are:\n");
    for (size_t i = 0; i <= len; i++)
    {
        printf("%c ", s[i]);
    }
    
    return (0);
}
#include <stdio.h>

int main(void)
{
    char s[30];

    printf("Input the Sting: ");
    gets(s);

    printf("The characters of the string are: \n");
    for (size_t i = 0; s[i] != '\0'; i++)
    {
        printf("%c ", s[i]);
    }
    
    return (0);
}
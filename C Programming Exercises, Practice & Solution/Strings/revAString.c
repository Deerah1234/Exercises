#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[30], ch;

    printf("Enter a string: ");
    gets(s1);

    size_t len = strlen(s1);

    printf("The reverse of %s is -> ", s1);
    for (size_t i = 0; i < len/2; i++)
    {
        ch = s1[i];
        s1[i] = s1[len-1-i];
        s1[len-1-i] = ch;
    }
    printf("%s", s1);
    return (0);
}

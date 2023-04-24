#include <stdio.h>

int main(void)
{
    char s[] = "Hii";
    size_t len = 0;

    for (size_t i = 0; s[i] != '\0'; i++)
    {
        len++;
    }
    printf("The length of string is = %d", len);
    return (0);
}

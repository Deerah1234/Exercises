#include <stdio.h>

int main(void)
{
    char s1[30];

    printf("Enter a string: ");
    gets(s1);

    printf("from %s to -> ", s1);
    for (size_t i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
        {
            s1[i] = s1[i] + 32;
        }
    }
    printf("%s", s1);
    return (0);
}

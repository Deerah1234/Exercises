#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[30], s2[30];

    printf("Enter string 1: ");
    scanf("%s", s1);
    printf("Enter string 2: ");
    scanf("%s", s2);

    size_t len1 = strlen(s1);

    printf("%s is concatenated with %s -> ", s1, s2);
    for (size_t i = 0; s2[i] != '\0'; i++)
    {
        s1[len1 + i] = s2[i];
    }
    printf("%s\n", s1);
    return (0);
}
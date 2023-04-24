#include <stdio.h>

int main(void)
{
    char s1[30], s2[30];
    size_t flag = 0;

    printf("Enter string 1: ");
    gets(s1);
    printf("Enter string 2: ");
    gets(s2);

    printf("%s and %s are -> ", s1, s2);
    for (size_t i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
        {
            flag = 1;
            break;
        }
        
    }
    if (flag == 0)
        printf("Same");
    else
        printf("Not same");

    return (0);
}

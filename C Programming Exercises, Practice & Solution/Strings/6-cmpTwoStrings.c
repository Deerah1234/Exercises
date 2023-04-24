#include <stdio.h>
#define str_size 100

int main(void)
{
    char s1[str_size], s2[str_size];
    int flag = 0;

    printf("Check the length of two strings:\n");
    printf("--------------------------------\n");

    printf("Input the 1st string: ");
    gets(s1);
    printf("Input the 2nd string: ");
    gets(s2);

    for (size_t i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
        {
            flag = 1;
            break;
        }
        
    }
    if (flag == 0)
        printf("Strings are equal.");
    else
        printf("Strings are not equal.");

    return (0);
}

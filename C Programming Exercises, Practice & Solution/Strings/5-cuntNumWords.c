#include <stdio.h>

int main(void)
{
    char s[100] = "Hello world me";
    size_t wrd = 1;

    for (size_t i = 0; s[i] != '\0'; i++)
    {
        // if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
        //     wrd++;
        if (s[i]==32)
        {
            wrd++;
        }
        
    }
    printf("%d", wrd);
    
    return (0);
}
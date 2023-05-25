#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void print(char *ptr, ...);

int main(void)
{
    print("dfsc", 1, 2.2, "name", 'c');
    return (0);
}

void print(char *ptr, ...)
{
    int num_args = strlen(ptr);

    va_list argptr;
    va_start(argptr, ptr);

    for (size_t i = 0; i < num_args; i++)
    {
        if (ptr[i] == 'd')
        {
            int integer = va_arg(argptr, int);
            printf("%d ", integer);
        }
        else if (ptr[i] == 'f')
        {
            float floating = va_arg(argptr, double);
            printf("%f ", floating);
        }
        else if (ptr[i] == 's')
        {
            char *string = va_arg(argptr, char*);
            printf("%s ", string);
        }
        else if (ptr[i] == 'c')
        {
            char *character = va_arg(argptr, char*);
            printf("%c ", character);
        }
    }

    va_end(argptr);
}